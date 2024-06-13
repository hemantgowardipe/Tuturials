using namespace std;
#include<iostream>
int  main()
{
	int start,end,sum;
	cout<<"enter the start and end value"<<endl;
	cin>>start>>end;
	for(int i=start;i<=end;i++){
		if(i%2!=0){
			sum=sum+i;
		}
	}
	cout<<"Sum of all the odd number from"<<start<<"to"<<end<<"is"<<sum<<endl;
}
