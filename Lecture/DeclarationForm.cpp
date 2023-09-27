#include<iostream>
using namespace std;
void declarationForm();
int main(){
	//declaration form part
	declarationForm();
	return 0;
}
void declarationForm(){
	int check5;
	char check1,check2,check3,check4,check6,check7;
	cout<<"\t\tDeclaration Form\n";
	cout<<" if the information you entered is wrong then we NUST ban you\n and you would not be able to take admission in any of the HEC recongnised universities for three years.\n";
	Recheck:
	cout<<"Do want to change your information(y/n)=";
	cin>>check4;
	if(check4=='Y'|| check4=='y'){
		cout<<"Choose from the following:\n1.Education Information\n2.Personal Information\n3.Father Information\n4.Mother Information\n5.Sports Information\n";
		cin>>check5;
		switch(check5){
			case 1:
				cout<<"Education Information\n";
				break;
				case 2:
					cout<<"Personal Information\n";
					break;
					case 3:
						cout<<"Father Information\n";
						break;
						case 4:
							cout<<"Mother Information\n";
							break;
							case 5:
								cout<<"Sports Information\n";
								break;
								default: 
								cout<<"You should only enters numbers from 1-5\n";
								goto Recheck;
								break;
		}
		}
		cout<<"Do you declare that your information is correct?(y/n)=";
		cin>>check6;
		if (check6 != 'y'&&check6 != 'Y')
		{goto Recheck;} 
		
		Recheck2:
		cout<<"You take the responsibility that you take the responsibility that you can bear the stress of the University(y/n)=";
		cin>>check7;
		if(check7!='Y'&&check7!='y'){
			cout<<"You must take responsibilty or you should not take addmisstion in that university\n";
			goto Recheck2;
		}
}
