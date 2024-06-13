using namespace std;
#include<iostream>
int main()
{
	int n,small=10,rem;
	cout<<"Enter the number"<<endl;
	cin>>n;
	while(n!=0){
		rem=n%10;
		if(rem<small){
			small=rem;
		}
		n=n/10;
	}
	cout<<"Smallest number is"<<small<<endl;
}
