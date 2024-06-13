using namespace std;
#include<iostream>
int main()
{
	long men,women,litmen,litwomen,illitrate,litrate,total=80000,illitwomen,illitmen;
	men=(52/100)*80000;
	women=total-men;
	litrate=(48/100)*80000;
	litmen=(35/100)*80000;
	litwomen=litrate-litmen;
	illitwomen=women-litwomen;
	illitmen=men-litmen;
	cout<<"Hence the total illitrate womens are"<<illitwomen;
	cout<<"Hence the total no of illitrate mens are"<<illitmen;
	
}