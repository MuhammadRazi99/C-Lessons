#include<iostream>
using namespace std;
class Complex{
    int real, imaginary;
    public:
    	Complex(int a){
    		cout<<"the number you have entered="<<a<<endl;
		}
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
     
	    }

};
int main(){
//Complex c;
//Complex *ptr=&c;
Complex *ptr1= new Complex(2);
(*ptr1).setData(1,54);
ptr1->getData();
// (*ptr).getData(); is as good as ptr->getData(); 
return 0;
}
