#include<iostream>
#include<string>
#include<Windows.h>
using namespace std; 
//address function declaring
void Address(char,string,string);
//adding uperlevel string that can enter a bool variable
void phone(string,string,string);
//student information declaring
void studentInformation(string student[],bool);
//father mother information function declaring
void fmInformation(string student[],string);
//main function 
int main(){
string student [21],father[10],mother[10]; 
cout<<"\t\tPersonal Infromation\n";
studentInformation(student,1);
cout<<"\t\tFATHER INFORMATION\n";
fmInformation(father,"UNEMPLOYMENT");
cout<<"\t\tMOTHER INFORMATION\n";
fmInformation(mother,"HOUSEWIFE");
return 0;
}
//address function defining
void Address(char a,string b,string c){
	if (a=='y'||a=='Y'){
	c=b;
	cout<<"\nPERMANENT ADDRESS:"<<c;
}
else {
	cout<<"\nPERMANENT ADDRESS:";
	getline(cin,c);}
}
// Adding phone no and email address
void phone(string a,string b, string c){
cout<<"\nCELL NUMBER:";
getline(cin,a);
cout<<"\nPHONE NO:";
getline(cin,b);
cout<<"\nEMAIL ADDRESS:";
getline(cin,c);
}
//student information 
void studentInformation(string student[21],bool uperlevel){
char check1;
cout<<"\t\tStudent Information\n";
cout<<"NAME:";
getline(cin,student[0]);
cout<<"\nCNIC NUMBER/B.FORM NUMBER:";
getline(cin,student[1]);
cout<<"\nFATHER NAME:";
getline(cin,student[2]);
cout<<"\nFATHER CNIC NUMBER:";
getline(cin,student[3]);
cout<<"\nMOTHER NAME:";
getline(cin,student[4]);
cout<<"\nMOTHER CNIC NUMBER:";
getline(cin,student[5]);
cout<<"\nDATE OF BIRTH:";
getline(cin,student[6]);
cout<<"\nAge:";
getline(cin,student[7]);
cout<<"\nGENDER:";
getline(cin,student[8]);
cout<<"\nRELIGION:";
getline(cin,student[9]);
cout<<"\nNATIONALITY:";
getline(cin,student[10]);
cout<<"\nHAFIZ(y/n):";
getline(cin,student[11]);
cout<<"\nMARK OF IDENTIFICATION:";
getline(cin,student[12]);
if (uperlevel){
	phone(student[18],student[20],student[21]);
}
cout<<"\nTEMPERARY ADDRESS:";
getline(cin,student[13]);
cout<<"\nIs this your permentant address also?(y/n)=";
cin>>check1;
Address(check1,student[14],student[15]);
cout<<"\nCITY:";
getline(cin,student[16]);
cout<<"\nPROVINCE:";
getline(cin,student[17]);
}
// father mother information definition
void fmInformation(string student[10],string a){
	char check1;
	int check2;
	cout<<"NAME:";
getline(cin,student[0]);
cout<<"\nCNIC NUMBER:";
getline(cin,student[1]);
choose:
cout<<"Choose between the following:\n1."<<a<<"\n2.ARMY OFFICER\n3.GOVERNMENT JOB/OFFICER\n4.PRIVATE\n5.BUSSINESS\n";
	cin>>check2;
	switch(check2){
		case 1:
			student[2]=a;
			cout<<"\t\t"<<a<<endl;
			student[3]="No Rank";
			student[4]="Income=0";			
			break;
			case 2:
				student[2]="ARMY OFFICER";
				cout<<"\t\t"<<"ARMY OFFICER"<<endl;
				cout<<"\nRANK=";
				getline(cin,student[3]);
				cout<<"\nINCOME=";
				getline(cin,student[4]);
				break;
				case 3:
					student[2]="GOVERNMENT JOB/OFFICER";
					cout<<"\t\t"<<"GOVERNMENT JOB/OFFICER"<<endl;
					cout<<"\nRANK=";
					getline(cin,student[3]);
					cout<<"\nINCOME=";
					getline(cin,student[4]);
					break;
					case 4:
						student[2]="PRIVATE";
						cout<<"\t\t"<<"PRIVATE"<<endl;
						cout<<"\nRANK=";
						getline(cin,student[3]);
						cout<<"\nINCOME=";
						getline(cin,student[4]);
						break;
						case 5:
							student[2]="BUSSINESS";
							cout<<"\t\t"<<"BUSSINESS"<<endl;
							cout<<"\nTYPE OF BUSINESS=";
							getline(cin,student[3]);
							cout<<"\nINCOME=";
							getline(cin,student[4]);
							break;
							default:
								cout<<"syntax error\nPlease try again\n Enter number as option\n";
								Sleep(3000);
								system("CLS");
								goto choose;
								break;
	}
cout<<"\nCELL NUMBER:";
getline(cin,student[5]);
cout<<"\nPHONE NUMBER:";
getline(cin,student[6]);
cout<<"\nTEMPERARY ADDRESS:";
getline(cin,student[7]);
cout<<"\nIs this your permentant address also?(y/n)=";
cin>>check1;
Address(check1,student[7],student[8]);
cout<<"\nCITY:";
getline(cin,student[9]);
cout<<"\nPROVINCE:";
getline(cin,student[10]);
}

