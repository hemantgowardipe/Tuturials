using namespace std;
#include<iostream>
int main()
{
	float sal;
	cout<<"Enter the salary"<<endl;
	cin>>sal;
	if(sal>=1 && sal<=150000){
		cout<<"tax is zero"<<endl;
	}
	else if(sal>=150000 && sal<=300000){
		//10% of the tax is 10%=10/100 i.e 0.1*salary
		cout<<"tax is="<<0.1*sal<<endl;          
}
	else if(sal>=300000 && sal<=500000){
		//20% of the tax is 20%=20/100 i.e 0.2*salary
		cout<<"tax is="<<0.2*sal<<endl;
	}
	else{
		//if the amount of salary is greater tha five lack then 30% of the tax is 30%=30/100 i.e 0.3*salary
		cout<<"tax is="<<0.3*sal;
	}
}
