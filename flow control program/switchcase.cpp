using namespace std;
#include<iostream>
int main()
{
	int ch;
	float amt,plates;
	cout<<"1.Idli"<<endl<<"2.Wada"<<endl<<"3.Dosa"<<endl;
	cin>>ch;
	
	switch (ch)
	{
		case 1:
			cout<<"---Idli---"<<endl;
			cout<<"How many plates?"<<endl;
			cin>>plates;
			amt=plates*100;
			cout<<"Bill is="<<amt<<endl;
			break;
			
		case 2:
			cout<<"---Wada---"<<endl;
			cout<<"How many plates?"<<endl;
			cin>>plates;
			amt=plates*60;
			cout<<"Bill is"<<amt<<endl;
			break;
			
		case 3:
			cout<<"---Dosa---"<<endl;
			cout<<"How many plates?"<<endl;
			cin>>plates;
			amt=plates*400;
			cout<<"Bill is"<<amt<<endl;
			break;
	}
}

