using namespace std;
#include<iostream>
int main()
{
	int a , b , temp;
	cout<<"enter the value of a & b"<<endl;
	cin>>a>>b;
	cout<<"Before swapping a="<<a<<",b="<<b<<endl;
	temp = a;
	a=b;
	b=temp;
	cout<<"After swapping a="<<a<<",b="<<b<<endl;
}



