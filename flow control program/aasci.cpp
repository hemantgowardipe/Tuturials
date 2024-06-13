using namespace std;
#include<iostream>
int main()
{
	char ch,a;
	cout<<"Enter the alphabet"<<endl;
	cin>>ch;
	if(ch>=65 && ch<=90){
		ch=ch+32;
		cout<<ch;
	}
	else if(ch>=97 && ch<=122){
		ch=ch-32;
		cout<<ch;
	}
	else{
		cout<<"special character"<<endl;
	}
}
// difference between big alphabet and small aplhabet is of 32 
//range of capital ascci value id 65-90
//range of small ascci value is 97-122
