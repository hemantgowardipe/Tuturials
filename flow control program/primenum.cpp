using namespace std;
#include<iostream>
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	if(n<=1){
		cout<< n << "is not a prime number"<<endl;
			}
			for(int i=2;i<=n/2;i++){
				if(n%i==0){
					cout<< n <<" is not a prime number"<<endl;
				}
				else{
					cout<<n<<"is prime number"<<endl;
				}
			}
}
