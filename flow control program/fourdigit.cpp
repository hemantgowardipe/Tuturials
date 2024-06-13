using namespace std;
#include<iostream>
int main()
{
	int num,a,b,c,d,rev;
	cout<<"Enter any four digit number";
	cin>>num;
	a=num%10;              //4
	b=(num/10)%10;          //3
	c=(num/100)%10;           //2
	d=num/1000;              //1
	rev=d*1000+b*100+c*10+a*1;
	cout<<"rev number is"<<rev;
}