#include<iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;
    string name;
    public:
        void setData(int a,string b,float c){
            id = a;
        	name=b;
            price =c;
        }
        void getData(void){
            cout<<"Code of this item = "<< id<<endl;
            cout<<"Name of this item ="<<name<<endl;
            cout<<"Price of this item = "<<price<<endl;
        }
};
        // 1 2 3
        //     ^
        //     |
        //     |
        //     ptr
        // ptrTemp
int main(){
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int [34];

    // 1. general store item
    // 2. veggies item
    // 3. hardware item
    ShopItem *ptr = new ShopItem [size];
    ShopItem *ptrTemp = ptr;
    int p, i;
    string q;
    float r;
    for (i = 0; i < size; i++)
    {
        cout<<"Enter Id of the item "<< i+1<<endl;
        cin>>p;
        cout<<"Enter the name of the item"<<i+1<<endl;
        cin>>q;
        cout<<"Enter the price of the item"<<i+1<<endl;
        cin>>r;
        // (*ptr).setData(p, q);
        ptr->setData(p, q, r);
        ptr++; 
    }

    for (i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
return 0;    
}
