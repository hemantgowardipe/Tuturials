using namespace std;
#include<iostream>
int  main()
{
	int bal,ch,amt,total;
	cout<<"enter your balance"<<endl;
	cin>>bal;
	cout<<"1.Withdrawl"<<endl<<"2.Deposit"<<endl;
	cin>>ch;
	 
	switch(ch)
	{
		case 1:
			cout<<"----Withdrawl----"<<endl;
			cout<<"Enter withdrawl amount"<<endl;
			cin>>amt;
			total=bal-amt;
			cout<<"Total Balance after withdrawl is="<<total<<endl;
			break;
			
		case 2:
			cout<<"----Deposit----"<<endl;
			cout<<"Enter deposit amount"<<endl;
			cin>>amt;
			total=bal+amt;
			cout<<"Total Balance after withdrawl is="<<total<<endl;
			break;
		
		default :
			cout<<"Please enter valid choice"<<endl;
	}
}
