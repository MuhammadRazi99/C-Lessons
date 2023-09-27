#include <iostream>
using namespace std;
class Books{
	int noOfBooks;
	string name,author;
	public:
		Books();
		Books(string,string);
		void printData();
};
Books::Books(){
	noOfBooks=100;
}
Books::Books(string name,string author){
	noOfBooks=100;
	Books::author=author;
	Books::name=name;
	
}
void Books::printData(){
	cout<<"Title:"<<Books::name<<endl<<"Author:"<<Books::author<<endl<<"No of Books="<<Books::noOfBooks<<endl;
}

int main(){
Books b1;	
b1.printData();
Books b2("Title of the Book","Author");
b2.printData();
}
