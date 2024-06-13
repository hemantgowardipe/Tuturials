using namespace std;
#include<iostream>
int main()
{
	int std,pencil=0;
	cout<<"enter standerd"<<endl;
	cin>>std;
	for(int i=1;i<=std;i++){
		pencil=pencil+i*i;
		cout<<"No of pencils "<<std<<pencil;
	}
}
