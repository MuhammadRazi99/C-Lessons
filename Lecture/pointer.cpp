#include<iostream>
using namespace std;
int main(){
/*pointer--->data type which holds the address of different
 data type  */
 int a=5;
 int* b;
 b=&a;
 // &--> (address of) Operator
 cout<<"the address of a="<<&a<<endl;
 cout<<"the value of b="<<b<<endl;
 
 // *-->(value of) dereference operator
 cout<<"the value of a="<<a<<endl;
 cout<<"the derefernce operator of b="<<*b<<endl;
 //pointer to pointer
 int** c=&b;
 cout<<"the address of b="<<c<<endl;
 cout<<"the value at adress(value_at(value_at))="<<**c<<endl;
 return 0;
}
