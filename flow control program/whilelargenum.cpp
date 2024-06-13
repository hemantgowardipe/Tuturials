using namespace std;
#include<iostream>
int main()
{
	int n,large=0,rem;
	cout<<"enter the num"<<endl;
	cin>>n;
	while(n!=0)
	{
		rem=n%10;
		if(rem>large){
			large=rem;
		}
		n=n/10;
	}
	cout<<"Largest number is"<<large<<endl;
}
