#include<iostream>
using namespace std;
//explanation of the static variable
class employee{
	int id;
	static int count;
	public:
		void setData(void){
			cout<<"Enter the ID=";
			cin>>id;		
			count	++;
		}
		void getData(void){
			cout<<"The Employee ID="<<id<<endl;
			cout<<"The Employee number="<<count<<endl;
		}
		static void getCount(void)
		{
			cout<<"The value of the count="<<count<<endl;
			
		}
};
int employee::count=10000; //defualt value of a static varible starts from 0.
int main(){
employee razi,safi,hamza;

razi.setData();
razi.getData();
employee::getCount();

safi.setData();
safi.getData();
employee::getCount();

hamza.setData();
hamza.getData();
employee::getCount();


return 0;	
}

