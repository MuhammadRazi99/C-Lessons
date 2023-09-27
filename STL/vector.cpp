#include<iostream>
#include<vector>
using namespace std;
template <class t>
void display(vector<t> &v){
	for (int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}


int main(){
vector<int> v1; //zero integer length vector
vector<char> v2(4);//4-element character vector
vector<char> v3(v2); //4-element character vector from the v2
vector<int> v4(6,3); //6-elements 3vectors
display(v2);
//int element,size;
//cout<<"Enter the size of your vector:";
//cin>>size;
//for (int i=0;i<size;i++){
//	cout<<"Enter an element to add this vector:";
//	cin>>element;
//	v1.push_back(element);
//}
////v1.pop_back(); //deletes the last element
//vector <int> ::iterator iter=v1.begin();
////v1.insert(iter,5,560); insert the item with help of iterator
return 0;
}

