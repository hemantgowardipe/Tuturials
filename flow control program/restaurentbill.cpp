using namespace std;
#include<iostream>
int main()
{
	int ch,ch1;
	float plates,amt,menu;
	cout<<"1.Dining"<<endl<<"2.Takeaway"<<endl;
	cin>>ch;
	
	switch(ch)
	{
		
		case 1:
			cout<<"1.wada"<<endl<<"2.dosa"<<endl<<"3.idli"<<endl;
			cin>>ch1;
			if(ch1==1)
			{
				cout<<"Plates?"<<endl;
				cin>>plates;
				amt=plates*100;
				cout<<"Please pay rs"<<amt<<endl;
			}
			else if(ch1==2)
			{
				cout<<"Plates?"<<endl;
				cin>>plates;
				amt=plates*60;
				cout<<"Please pay rs"<<amt<<endl;
			}
			else if(ch1==3)
			{
				cout<<"Plates?"<<endl;
				cin>>plates;
				amt=plates*40;
				cout<<"Please pay rs"<<amt<<endl;
				break;
			}
			cout<<"thank you"<<endl;
			
		
			
	}
}
