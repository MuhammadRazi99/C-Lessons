#include<iostream>
using namespace std;
class A{
    int a;
    int b;
    public:
         A setData(int a,int b){
//        void setData(int a){
            this->a = a;
            this->b=b;
             return *this;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            
        }
};

int main(){
    // this is a keyword which is a pointer which points to the object which invokes the member function
    A a;
    a.setData(4,5).getData();
//    a.getData();
    return 0;
}
