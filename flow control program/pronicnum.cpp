using namespace std;
#include<iostream>
int main()
{
	int n,i=5;
	cout<<"enter the number"<<endl;
	cin>>n;
	while(i*(i+1)<=0)
	{
		if(i*(i+1)==n){
			cout<<"Pronic num"<<endl;
		}
		else{
			cout<<"Noa a pronic number"<<endl;
		}
	}

}
