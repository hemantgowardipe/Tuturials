using namespace std;
#include<iostream>
int main()
{
	int range;
	cout<<"enter the month range"<<endl;
	cin>>range;
	if(range>=3 && range<=5){
		cout<<"The season is spring"<<endl;
	}
	else if(range>=6 && range<=8){
		cout<<"The season is summer"<<endl;
	}
	else if(range>=9 && range<=11){
		cout<<"The season is autumn"<<endl;
	}
	else if(range>=12 && range<=2){
		cout<<"The season is winter"<<endl;
	}
	else{
		cout<<"Invalid Month"<<endl;
	}
}
