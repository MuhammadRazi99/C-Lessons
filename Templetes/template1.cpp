#include<iostream>
using namespace std;
template <class T>
class vector{
	public:
		T *arr;
		int size;
		vector(int m){
			size=m;
			arr=new T[size];
		}
		T dotProduct(vector &v){
			T d=0;
			for (int i=0;i<size;i++){
				d+=this->arr[i]*v.arr[i];
			}
			return d;
		}
};

int main(){
//	vector v1(3);
//	v1.arr[0]=4;
//	v1.arr[1]=3;
//	v1.arr[2]=1;
//	vector v2(3);
//	v1.arr[0]=1;
//	v1.arr[1]=0;
//	v1.arr[2]=1;
//	int a =v1.dotProduct(v2);
//	cout<<a<<endl;
	
	vector <float>v1(3);
	v1.arr[0]=4.1;
	v1.arr[1]=3.5;
	v1.arr[2]=1.2;
	vector <float>v2(3);
	v1.arr[0]=1.3;
	v1.arr[1]=0.5;
	v1.arr[2]=1.9;
	float a =v1.dotProduct(v2);
	cout<<a<<endl;
}
