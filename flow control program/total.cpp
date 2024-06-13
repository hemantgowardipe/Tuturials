using namespace std;
#include<iostream>
int main()
{
	float maths,phy,chem,total,percentage;
	cout<<"Enter Marks Of maths";
	cin>>maths;

	cout<<"Enter Marks Of phy";
	cin>>phy;

	cout<<"Enter the Marks Of chem";
	cin>>chem;
	total=maths+phy+chem;
	cout<<"Total of subjects are"<<total<<endl;

	percentage = total/300*100;
	cout<<"Percentage of student is"<<percentage<<endl;
}
