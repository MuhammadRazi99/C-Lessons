#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int ccount=0;
	int a=0,e=0,i=0,o=0,u=0;
	char arr[101];
	cout<<" maxinum size of array is 100\n";
	cout<<"Enter the string using only character=";
	cin.getline(arr,101);
	int len=strlen(arr);
	for(int i=0;i<len;i++){
		switch(arr[i]){
			case 'a':
			case 'A':	
				a++;
				break;
				case 'e':
				case 'E':	
					e++;
					break;
					case'i':
					case 'I':	
						i++;
						break;
						case'o':
						case'O':	
							o++;
							break;
							case 'u':
							case 'U':	
								u++;
								break;
								default:
									ccount++;
									break;
		}
		
	}
	cout<<"vowel \'a\' comes "<<a<<" times\n";
	cout<<"vowel \'e\' comes "<<e<<" times\n";
	cout<<"vowel \'i\' comes "<<i<<" times\n";
	cout<<"vowel \'o\' comes "<<o<<" times\n";
	cout<<"vowel \'u\' comes "<<u<<" times\n";
	cout<<"consonants comes "<<ccount<<" times\n";
	return 0;	
}
//alternative thinkinng
/*#include<iostream>
#include<cstring>
using namespace std;
int vowel(char[],char);
int main(){
	int ccount=0;
	char arr[];
	cout<<"Enter the string";
	cin>>arr;
	
	cout<<"vowel \'a\'comes"<<vowel(char arr[],'a')<<" times\n";
	cout<<"vowel \'e\'comes"<<vowel(char arr[],'e')<<" times\n";
	cout<<"vowel \'i\'comes"<<vowel(char arr[],'i')<<" times\n";
	cout<<"vowel \'o\'comes"<<vowel(char arr[],'o')<<" times\n";
	cout<<"vowel \'u\'comes"<<vowel(char arr[],'u')<<" times\n";
}
int vowel(char a[],char vowel){
 int c=strlen(a);
 int vcount=0;
 for(int i=0;i<c;i++){
 	if(vowel==a[i]){
 		vcount++;
	 }
 }
 return vcount;
}*/
