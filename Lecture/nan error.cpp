#include<iostream>
using namespace std;
float func(float[][4],int);

int main(){
float news[3][4]={{1.0,2.0,3.0,4.0},{1.0,2.0,3.0,4.0},{1.0,2.0,3.0,4.0}};	
cout<<func(news,sizeof(news)/sizeof(news[0]))<<endl;
	
}

float func(float array[][4],int size){
	float sum=0;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<4;j++)
		{
			sum+=array[i][j];
			
		}
	}
}

