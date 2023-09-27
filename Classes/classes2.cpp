#include <iostream>
using namespace std;
class shop{
	int itemId[100];
	int itemPrice[100];
	int counter;
	public:
		void initCounter(void){counter=0;}
		void setPrice(void);
		void displayPrice(void);
};
void shop::setPrice(){
	cout<<"Enter Id of your Item no \""<<counter<<"\" = ";
	cin>>itemId[counter];
	cout<<"Enter price of your Item=";
	cin>>itemPrice[counter];
	counter++;	
}
void shop::displayPrice(){
	for(int i=0;i<counter;i++)
	{
	cout<<"The Price of the Item with Id \""<<itemId[i]<<"\" = "<<itemPrice[i]<<endl;	
	}
}


int main(){
	shop dukaan;
	dukaan.initCounter();
	dukaan.setPrice();
	dukaan.setPrice();
	dukaan.setPrice();
	dukaan.displayPrice();
	return 0;
}
