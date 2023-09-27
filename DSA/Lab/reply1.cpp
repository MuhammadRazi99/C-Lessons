#include<iostream>
using namespace std;

void scoring(int arr[]){
for (int i = 10; i > 0; --i) {
int sum = 0;
for (int j = 0; j < i; ++j) {
sum = sum + arr[j];
}
cout << "For " << i << " Sum = " << sum << endl;
}
cout << endl;
}

int main() {
int a1[] = {0, 10, 5, 0, 0, 7, 4, 1, 1, 6};
int a2[] = {0, 6, 1, 7, 3, 4, 7, 0, 5, 7};
int a3[] = {0, 5, 4, 5, 0, 10, 1, 8, 3, 8};
int a4[] = {8, 2, 5, 0, 0, 4, 3, 9, 6, 4};
int a5[] = {5, 1, 4, 5, 1, 8, 9, 10, 9, 7};

scoring(a1);
scoring(a2);
scoring(a3);
scoring(a4);
scoring(a5);
}
