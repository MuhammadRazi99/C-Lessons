
#include<iostream>
using namespace std;
int main(){
	int z=1,x=1,y;
	cout<<"\t\tSERIES\n";
	cout<<"\t\t------\n\n";
	cout<<"NO.1\t\tNO.2\t\tNO.3\n";
	cout<<"----\t\t----\t\t----\n";
	while(x<=4){
		//for series1
		y=1;
		while(y<=x)
		{
			cout<<y;
			y++;
		}
		cout<<"\t\t";
		//for series2
		y=1;
		while(y<=x)
		{
			cout<<x;
			y++;
		}
		cout<<"\t\t";
		//for seriesno3
		y=1;
		while(y<=x){
			cout<<z;
			z++;
			y++;
		}
		cout<<endl;
		x++;
	}
	return 0;
}
