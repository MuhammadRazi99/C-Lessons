#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>
#include<iomanip>
#include<Windows.h>

using namespace std;

// admin pannel Funtions
void adminPannel();  
void stockInquiry();
void addProduct(); 
void addNewProduct(); 
void updateProduct(); 
void customerInquiry(); 
void customerFeedback(); 
void salesInquiry(); 
void customerData(); 

// customer pannel Funtions
void customerPannel(); 
void customerInfo();  
void searchByName();  
void showAllProducts(); 
void orderProduct(int);
void reportProblem(); 

//menu's
void mainMenu(); 
void adminMenu(); 
void customerMenu(); 

//Declaring structures globally for use in the whole program

struct Item
{
	string name;
	double price;
	int quantity;
}items[500]; // items structure array of size 500

struct customer
{
	string firstName;
	string lastName;
	string address;
	string contact;
}customers[500]; // customers structure array of size 500

struct Feedbacks
{
	string message;
	customer customer;  // customer(structure) type object of customer.
}feedBacks[500];	   // feedback structure array to store feedback of spefic customer with details

struct Orders
{
	customer customer;
	Item item;
	double totalBill;
}orders[500];  // order structure array of size 500

// global scope variables to store total (counter)

int countCustomers = 0; // total added customers
int countProducts = 0;  // total products 
int countOrders = 0;  // total orders
int countFeedbacks = 0; // total feedbacks reports

void writeProduct()
{
	ofstream write_item;
	write_item.open("items.txt");
	if (write_item.is_open())
	{
		write_item << countProducts;
		for (int i = 0; i < countProducts; i++)
		{
			write_item << items[i].name <<"\t"<< items[i].price << "\t" << items[i].quantity << "\n";
		}
	}
	write_item.close();
}

void readProduct()
{
	ifstream read_item;
	read_item.open("items.txt");
	if (read_item.is_open())
	{
		read_item >> countProducts;
		for (int i = 0; i < countProducts; i++)
		{
			read_item >> items[i].name >> items[i].price >> items[i].quantity;
		}
	}
	read_item.close();
}

int main()
{
	readProduct();
	while (true)
	{
		system("cls");  //To clear the console screen
		int option;
		mainMenu();
		cin >> option;
		system("cls");

		switch (option)
		{
		case 1:  //For Administrator 
		{
			adminPannel();
			break;
		}
		case 2: 	 //For Customer
		{
			customerPannel();
			break;
		}
		case 3:    //For Exiting the program
			return 0;
			break;
		default:
		{
			cout << "\n Wrong Input ! Please Enter the correct choice. " << endl;
		}
		}
	}

	return 0;
}

void mainMenu()
{
	system("color 07");
	cout << "\"Project\" \n\"GROUP-5\"\n";
	cout << "___________________________STORE MANAGEMENT SYSTEM___________________________\n\n\n";
	cout << " You want to use the system as: \t \n\n" << endl;
	cout << "1. ADMINISTRATOR\n";
	cout << "2. CUSTOMER" << endl;
	cout << "3. Exit \n";
	cout << "\n Enter Your Choice---> ";
}

//Customer pannel Functions 

void customerMenu()
{
	system("color 03");
	cout << "\n\t _______________WELCOME TO OUR STORE________________ \n";
	cout << "\n\t\t Choose what you want to do from the following: \n";
	cout << "\t\t 1. View Available Products \n\t\t 2. Search products \n\t\t 3. Give feedback\n\t\t 4. Exit " << endl;
	cout << "\n\t\t Enter Your Choice---> ";
}
void customerPannel()
{
	customerInfo();  // Every new customer has to enter its info.
	char ch;
	do
	{
		system("cls");
		int option;
		customerMenu();  //shows available options
		cin >> option;
		switch (option)
		{
		case 1:   //View all product list
			showAllProducts();
			break;
		case 2:  //Search products by name
			searchByName();
			break;
		case 3: //Give Feedback
			reportProblem();
			break;
		case 4: //return to main
			return;
			break;
		default:
			cout << "\n Wrong Input ! \n " << endl;
		}
		cout << "\nDo You Want To See Customer Pannel Again (y/n) ? -->";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');

}
void customerInfo()
{
	system("color 0E");
	cout << "\n\t < --------------Customer Details-------------- >\n" << endl;

	cout << "\n Enter First Name --> ";
	cin >> customers[countCustomers].firstName; //For first customer index is 0

	cout << "\n Enter Last Name --> ";
	cin >> customers[countCustomers].lastName;

	cin.ignore();
	cout << "\n Enter Address --> ";
	getline(cin, customers[countCustomers].address);

	cout << "\n Enter Contact --> ";
	cin >> customers[countCustomers].contact;

	countCustomers++; //Total customers counter increments after every input
}
void showAllProducts()
{
	char choice;
	do
	{
		system("color 0B");
		system("cls");
		cout << "\n\t < -------------- ALL PRODUCTS LIST -------------- >\n" << endl;
		char ch;
		int toOrderId = 0;
		cout << setw(12) << " Id " << setw(12) << " Name " << setw(14) << " Price " << setw(14) << " Quantity " << endl << endl;
		for (int i = 0; i < countProducts; i++)  //loop to iterate until all products are displayed
		{
			cout << setw(12) << i << setw(12) << items[i].name << setw(14) << items[i].price << setw(14) << items[i].quantity << endl << endl;
		}  //using loop variable(i) as the product ID also

		cout << "Do You Want To Order Any Product (y/n)? --> ";
		cin >> ch;
		if (ch == 'y' || ch == 'Y')
		{
			while (true) //loop will iterate untill user enters correct order ID
			{
				bool found = false;
				cout << "\n Enter Product Id to Order --> ";
				cin >> toOrderId;
				for (int i = 0; i < countProducts; i++)
				{
					if (toOrderId == i)          //check if Valid ID is enetered or not
					{
						found = true;
					}
				}
				if (found == true)
				{
					orderProduct(toOrderId);  //Passing order id to order product function
					break;
				}
				else
				{
					cout << "\n Entered product ID Not found !! \n" << endl;
				}
			}
		}
		else
		{
			return;  //if user doesn't want to order it will return to customer pannel
		}
		cout << "\nDo you want to order any other product(y/n) ? --> ";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');
}

void orderProduct(int toOrderid)  //taking product id as parameter
{
	system("cls");
	cout << "\n\t < -------------- Order Details -------------- >\n" << endl;

	int currentCustomer = countCustomers - 1; //since after input of every customer, counter increments so current customer info is at (counter-1)th index
	int toOrderQty = 1;  
	char ch;
	cout << "\n Enter Quantity of Product --> ";
	cin >> toOrderQty;
	if (toOrderQty > items[toOrderid].quantity)  //To check if quantity is available in stock
	{
		system("color 04");
		cout << "\n THIS PRODUCT IS OUT OF STOCK " << endl;
		cout << "\n Available quantity of this product is --> " << items[toOrderid].quantity << endl;
	}
	else   //If quantity is valid
	{								//Display info of current customer i.e. count customer-1
		cout << setw(12) << " First Name " << setw(12) << " Last Name " << setw(14) << " Contact " << setw(20)<< " Address " << endl << endl;
		cout << setw(12) << customers[currentCustomer].firstName << setw(12) << customers[currentCustomer].lastName << setw(14) << customers[currentCustomer].contact << setw(34) << customers[currentCustomer].address << endl << endl;
		cout << "\n Is This Information correct (y/n) ? -->";
		cin >> ch;
		if (ch == 'y' || ch == 'Y')   //customer info is correct 
		{							 //customer info of current customer will be imported to the orders array.
			orders[countOrders].customer.firstName = customers[currentCustomer].firstName;
			orders[countOrders].customer.lastName = customers[currentCustomer].lastName;
			orders[countOrders].customer.contact = customers[currentCustomer].contact;
			orders[countOrders].customer.address = customers[currentCustomer].address;
			orders[countOrders].item.name = items[toOrderid].name; //accessing info from the struct object: items
			orders[countOrders].item.price = items[toOrderid].price;
			orders[countOrders].item.quantity = toOrderQty;  //the quantity user wants to order

			orders[countOrders].totalBill = (items[toOrderid].price * toOrderQty);  //Billing (Bill = price*qty) 
			
			items[toOrderid].quantity -= toOrderQty;  //To reduce the quantity from total Stock (Qty= Qty-toOrderqty)
			cout << "\n\n\t You have purchased: \t";
			cout << orders[countOrders].item.quantity << "   " << orders[countOrders].item.name << endl;  //Display item name and purchased qty
			cout << "\n\t YOUR TOTAL BILL IS: " << orders[countOrders].totalBill << " Rupees" << endl;  //Display Bill

			countOrders++;  //Order counter increments
		}
		else  //if customer info is incorrect, ask for new input
		{
			cout << "\n Enter First Name --> ";
			cin >> customers[countCustomers].firstName;

			cout << "\n Enter Last Name --> ";
			cin >> customers[countCustomers].lastName;

			cout << "\n Enter Address --> ";
			cin >> customers[countCustomers].address;

			cout << "\n Enter Contact --> ";
			cin >> customers[countCustomers].contact;

			countCustomers++;	//customer counter increments
			return;
		}
	}
} 
void reportProblem()
{
	system("color 0B");
	system("cls");
	int currentCustomer = countCustomers - 1;  //info of current customer is at the last index before incrementing the counter
	string feedback;
	char ch;
	cout << "\n\t < -------------- FEEDBACK MENU -------------- >\n";
	cout << "\nEnter Feedback / Report an Issue To admin ---> ";
	cin.ignore();	//To ignore the '\n' in the memory buffer
	getline(cin, feedback);		//For string input(including spaces)
	cout<<endl;
	cout << setw(12) << " First Name " << setw(12) << " Last Name " << setw(14) << " Contact " << setw(20) << " Address " << endl << endl;
	cout << setw(12) << customers[currentCustomer].firstName << setw(12) << customers[currentCustomer].lastName << setw(14) << customers[currentCustomer].contact << setw(34) << customers[currentCustomer].address << endl << endl;
	cout << "\n Is This Information correct (y/n) ? -->";
	cin >> ch;
	if (ch == 'y' || ch == 'Y')
	{
		feedBacks[countFeedbacks].message = feedback;
		feedBacks[countFeedbacks].customer.firstName = customers[currentCustomer].firstName; //accessing info of current customer from struct type obj: customers
		feedBacks[countFeedbacks].customer.lastName = customers[currentCustomer].lastName;
		feedBacks[countFeedbacks].customer.contact = customers[currentCustomer].contact;
		feedBacks[countFeedbacks].customer.address = customers[currentCustomer].address;
		cout << "\n Your Feedback is sent to Admin \n " << endl;
		countFeedbacks++;  //Feedback counter increments
	}
	else
	{		//if customer is not the current customer, ask for new customer info
		cout << "\n Enter First Name --> ";
		cin >> customers[countCustomers].firstName;

		cout << "\n Enter Last Name --> ";
		cin >> customers[countCustomers].lastName;

		cout << "\n Enter Address --> ";
		cin >> customers[countCustomers].address;

		cout << "\n Enter Contact --> ";
		cin >> customers[countCustomers].contact;

		cout << "\nEnter Feedback / Report an Issue To admin ---> ";
		cin.ignore();	
		getline(cin, feedback);		
		cout << endl;

		feedBacks[countFeedbacks].message = feedback;
		feedBacks[countFeedbacks].customer.firstName = customers[countCustomers].firstName; //accessing info of of customer at index: countcustomer
		feedBacks[countFeedbacks].customer.lastName = customers[countCustomers].lastName;
		feedBacks[countFeedbacks].customer.contact = customers[countCustomers].contact;
		feedBacks[countFeedbacks].customer.address = customers[countCustomers].address;

		cout << "\n Your Feedback is sent to Admin \n " << endl;
		countFeedbacks++;	//feedback counter increments
		countCustomers++;	//Customer counter increments
	}
}
void searchByName()
{
	system("color 0B");
	system("cls");
	cout << "\n\t < -------------- SEARCH PRODUCT BY NAME -------------- >\n" << endl;

	string toSearch;  //string to input item name
	char ch;
	do
	{
		bool found = false;
		int foundId = 0;
		cout << "Enter Product Name in lower case -->";		//to avoid errors
		cin >> toSearch;

		for (int i = 0; i < countProducts; i++)  //loop to search through all available products
		{
			if (toSearch == items[i].name)  //in case item matches
			{  
				foundId = i; //index=>product id=>found id
				found = true;
				break;
			}
		}
		if (found == true)
		{					//Display the product details
			cout << setw(12) << " Id " << setw(12) << " Name " << setw(14) << " Price " << setw(14) << " Quantity " << endl << endl;
			cout << setw(12) << foundId << setw(12) << items[foundId].name << setw(14) << items[foundId].price << setw(14) << items[foundId].quantity << endl << endl;
			cout << "Do You Want To Order This Product (y/n)? --> ";
			cin >> ch;
			if (ch == 'y' || ch == 'Y')
			{
				orderProduct(foundId);  //Product id is passed to orderProduct function
			}
			else
			{
				break;
			}
		}
		else
		{
			cout << "\n Product Not Found in the record / Entered Product Name is Incorrect \n " << endl;
		}
		cout << "\n Do you want to search again (y/n) ? --> ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
}

// Admin Pannel Functions

void adminMenu()
{
	system("color 03");
	cout << "\n\t _______________WELCOME TO ADMINISTRATION DEPARTMENT________________ \n";
	cout << "\n\t\t Choose what you want to do from the following: \n\n";
	cout << "\t\t 1. Add Product \n\t\t 2. Customer Inquiry \n\t\t 3. Sales Inquiry \n\t\t 4. Stock Inquiry \n\t\t 5. Exit" << endl;
	cout << "\n\t\t Enter Your Choice---> ";
}
void adminPannel()
{
	string ID;
	string pass;
	cout << "\n\t________________LOGIN MENU_________________ \n";
Again:  //Label for goto statement
	cout << "\nEnter Login ID: " << endl << " ";
	cin >> ID;
	cout << "\nEnter Password: " << endl << " ";
	cin >> pass;

	if (ID == "Group-5" && pass == "Project-1")
	{
		char ch;
		do
		{
			system("CLS");   //To clear the console screen
			int choice;
			adminMenu();      //Calling the main admin menu
			cin >> choice;

			switch (choice)
			{
				case 1:     			//Add stock functiion
				{	addProduct();
					break;
				}
				case 2:   			 // Customer inquiry function
				{
					customerInquiry();
					break;
				}
				case 3:				//Sales inquiry functiion
				{
					salesInquiry();
					break;
				}
				case 4:			  // Stock inquiry function
				{
					stockInquiry();
					break;
				}
				case 5:		  //Exiting=> returning to main
				{
					return;
					break;
				}
				default:
					cout << "\n Wrong Input ! \n " << endl;
					break;
			}

			cout << "\nDo You Want To See Admin Pannel Again (y/n) ? -->";
			cin >> ch;
		} while (ch == 'y' || ch == 'Y');
	}
	else
	{    //if wrong password is entered
		cout << "\n<------ Wrong ID or Password entered------>\n";
		cout << "\n\t    <-----TRY AGAIN-----> \n";
		goto Again;  //move control to the label: Again
	}
}
void stockInquiry()
{
	system("color 0B");
	system("cls");
	cout << "\n\t < -------------- STOCK INQUIRY -------------- >\n" << endl;
	cout << setw(12) << " Id " << setw(12) << " Name " << setw(14) << " Price " << setw(14) << " Quantity " << endl << endl;

	for (int i = 0; i < countProducts; i++)  //loop iterates untill all products are not displayed
	{
		cout << setw(12) << i << setw(12) << items[i].name << setw(14) << items[i].price << setw(14) << items[i].quantity << endl << endl;
	}
	cout << "\n" << endl;
	Sleep(3000);
	//loop to check Stock Quantity
	for (int i = 0; i < countProducts; i++)
	{
		if (items[i].quantity <= 10)  //Minimum limit set=10 
		{
			system("cls");
			system("color 04");
			cout << "\n\t <-------------STOCK IS LESS IN NUMBER------------->\n\n";
			cout << "\t\t  " << items[i].name << "  Quantity is less than 10. " << endl;
			cout << "\n\t\t   YOU NEED TO ADD MORE STOCK...!!!\n";
		}
	}
}
void salesInquiry()
{
	system("color 0B");
	system("cls");

	cout << "\n\t < -------------- SALES INQUIRY -------------- >\n" << endl;
	cout << setw(12) << "Order Id " << setw(22) << " Customer Name " << setw(16) << " Item Name " << setw(14) << " Item Price " << setw(14) << " Item Quantity " << setw(14) << " Total Bill " << endl << endl;

	for (int i = 0; i < countOrders; i++)  //loop iterates untill all the orders are displayed 
	{
		cout << setw(10) << i << setw(12) << orders[i].customer.firstName << setw(8) << orders[i].customer.lastName << setw(14)
			<< orders[i].item.name << setw(14) << orders[i].item.price << setw(14) << orders[i].item.quantity << setw(14) << orders[i].totalBill << endl << endl;
	}
}

void addProduct()
{
	system("color 0B");
	char ch;
	do
	{
		system("cls");
		int choice;
		cout << "\n\t < -------------- ADD PRODUCTS -------------- >\n" << endl;
		cout << "\n1. Add New Product" << endl;
		cout << "\n2. Update Existing" << endl;
		cout << "\n3. Exit" << endl;
		cout << "\n Enter Your Choice---> ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			addNewProduct(); //Function to add more stock
			break;
		case 2:
			updateProduct();  //Function to update the existing stock
			break;
		case 3:
			return;  //Returning to the Admin pannel
			break;
		default:
			cout << "\nWrong Choice ! " << endl;
			break;
		}
		cout << "\nDo You Want To See The ADD PRODUCT MENU Again (y/n)?--> ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
}
void addNewProduct()
{
	char ch;
	do
	{
		system("cls");

		cout << "\n\t < -------------- ADD NEW PRODUCT -------------- >\n" << endl;

		cout << "\nEnter Product Name --> ";
		cin >> items[countProducts].name;  //Product  data is being stored into the items array of type struct
		cout << "\nEnter Product price --> ";
		cin >> items[countProducts].price;
		cout << "\nEnter Product Quantity --> ";
		cin >> items[countProducts].quantity;
		countProducts++;  //Product counter increments
		writeProduct();
		cout << "\nDo You Want To Add Another Product (y/n) ? -->";
		cin >> ch;

	} while (ch == 'y' || ch == 'Y');

}
void updateProduct()
{
	char ch;
	do
	{
		system("cls");
		cout << "\n\t < -------------- UPDATE EXISTING PRODUCT -------------- >\n" << endl;

		cout << "\n\t < -------------- ALL PRODUCTS LIST -------------- >\n" << endl;
		int toUpdateId = 0;
		bool found = false;
		cout << setw(12) << " Id " << setw(12) << " Name " << setw(14) << " Price " << setw(14) << " Quantity " << endl << endl;
		for (int i = 0; i < countProducts; i++) //Displaying all products list 
		{
			cout << setw(12) << i << setw(12) << items[i].name << setw(14) << items[i].price << setw(14) << items[i].quantity << endl << endl;
		}
		while (true)
		{
			cout << "\nEnter Product ID to Update -->";
			cin >> toUpdateId;
			for (int i = 0; i < countProducts; i++)  //loop will check for all products in the stock
			{
				if (toUpdateId == i)  //Checking validity of id  
				{
					found = true;
				}
			}
			if (found == true) //when product id is valid
			{		//updating(overwriting) the data of the item at index entered by user 
				cout << "\nEnter Product Name --> ";
				cin >> items[toUpdateId].name;
				cout << "\nEnter Product price --> ";
				cin >> items[toUpdateId].price;
				cout << "\nEnter Product Quantity --> ";
				cin >> items[toUpdateId].quantity;
				break; //will exit the while loop
			}
			else  //Incase any invalid id is entered
			{
				cout << "\nEntered Product ID Not Found In Record !" << endl;
			}
		}
		writeProduct();
		cout << "\nDo You Want To Update Another Product (y/n) ? -->";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
}

void customerInquiry()
{
	system("color 0B");
	system("cls");
	int choice;
	cout << "\n\t < -------------- CUSTOMER INQUIRY -------------- >\n" << endl;
	cout << "\n1. View Customer Biodata " << endl;
	cout << "\n2. View Feedback " << endl;
	cout << "\n3. Exit " << endl;
	cout << "\n Enter Your Choice---> ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		customerData(); //Function to access information of customer
		break;
	case 2:
		customerFeedback();  //Function to access the feedback entered by customer
		break;
	case 3:
		return;  //return to the Admin pannel
		break;
	default:
		cout << "Wrong Choice...!" << endl;
		break;
	}
}
void customerData()
{
	system("cls");
	cout << "\n\t < -------------- CUSTOMER DATA -------------- >\n" << endl;

	cout << setw(12) << " First Name " << setw(12) << " Last Name " << setw(14) << " Contact " << setw(20) << " Address " << endl << endl;

	for (int i = 0; i < countCustomers; i++)
	{   //extracting customer info from the customers array of type struct
		cout << setw(12) << customers[i].firstName << setw(12) << customers[i].lastName << setw(14) << customers[i].contact << setw(34) << customers[i].address << endl << endl;
	}
}
void customerFeedback()
{
	system("cls");
	cout << "\n\t < -------------- CUSTOMER FEEDBACKS -------------- >\n" << endl;
	cout << setw(14) << " First Name " << setw(14) << " Last Name " << setw(14) << " Contact " << setw(20) << " Address " << setw(25) << " Message " << endl << endl;
	for (int i = 0; i < countFeedbacks; i++)
	{   //extracting customer feedbacks from the feedbacks array of type struct
		cout << setw(14) << feedBacks[i].customer.firstName << setw(14) << feedBacks[i].customer.lastName << setw(14) << feedBacks[i].customer.contact
			<< setw(34) << feedBacks[i].customer.address << setw(35) << feedBacks[i].message << endl << endl;
	}
}

