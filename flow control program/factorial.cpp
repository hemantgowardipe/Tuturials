using namespace std;
#include<iostream>
int main()
{
	int num , fact=1;
	cout<<"Enter the number"<<endl;
	cin>>num;
	for(int i=1;i<=num;i++){
		fact=fact*i;
	}
	cout<<"Factorial of " << num << " is =" <<fact<<endl;
}
