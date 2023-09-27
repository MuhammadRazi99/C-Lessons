#include <iostream>
using namespace std;
class employee{
	int id;
	int salery;
	public:
		void setId(void){
			salery=122000;
			cout<<"Enter the ID of the Employee=";
			cin>>id;
		}
		
		void getId(void){
			cout<<"The ID of this employee="<<id<<endl;
			cout<<"The salery of this employee="<<salery<<endl;
		}
};

int main()
{
employee fb[4];
for(int i=0;i<4;i++)
{
	fb[i].setId();
	fb[i].getId();
}


return 0;	
}
