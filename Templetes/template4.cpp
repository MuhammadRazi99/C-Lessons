#include<iostream>
using namespace std;
/*float funcAverage1(int a,int b){
	float avg;
	avg=(a+b)/2.0;
	return avg;
}
float funcAverage2(int a,float b){
	float avg;
	avg=(a+b)/2.0;
	return avg;
}*/
template <class t1,class t2>
float funcAverage(t1 a,t2 b){
	float avg=(a+b)/2.0;
	return avg;
}

template <class t>
void swap(t &a,t &b){
	t temp=a;
	a=b;
	b=temp;
}
int main(){
//float a=funcAverage1(2,5);
//printf("the value of average=%.3f",a);
//float a=funcAverage2(2,5.3);
//printf("the value of average=%.3f",a);
float a=funcAverage(2,5.3);
printf("the value of average=%.3f",a);

return 0;
}

