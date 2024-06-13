using namespace std;
#include<iostream>
int main()
{
	int num;
	cout<<"Enter any 3 digit number";
	cin>>num;
	int num1=num%100;
	int num2=num1%10;
	int num3=num1/10;
	int num4=num/100;
	
	cout<<"Reverse sequence of number is"<<num2<<num3<<num4;
	
		
}