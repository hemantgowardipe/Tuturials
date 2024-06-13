using namespace std;
#include<iostream>
int main()
{
	int a,b,c;
	cout<<"enter three number a,b & c";
	cin>>a>>b>>c;

		if(a>=b){
			if(a>=c){
		cout<<"the largest amongst three number is:"<<a;
}
		else{
		cout<<"largest amongst three number is:"<<c;
}
}
		else{
			if(b>=c){
			cout<<"largest amongst three number is:"<<b;
}
		else{
		cout<<"largest amongst three number is:"<<c;
}
}
	return 0;
}