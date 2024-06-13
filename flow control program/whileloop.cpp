using namespace std;
#include<iostream>
int main()
{
	int num,count;
	cout<<"enter any number"<<endl;
	cin>>num;
	while(num!=0)	//123
	{
		num=num%100;
		count++;
	}
	cout<<num;
}
