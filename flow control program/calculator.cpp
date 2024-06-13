using namespace std;
#include<iostream>
int main()
{
	char op;
	float n1,n2;
	cout<<"enter the numbers and operator"<<endl;
	cin>>n1>>op>>n2;
	switch (op)
	{
		case '+':
		cout<<"Sum is =" <<n1+n2<<endl;
		break;
		
		case '-':
		cout<<"Sub is =" <<n1-n2<<endl;
		break;
		
		case '*':
		cout<<"Mul is =" <<n1*n2<<endl;
		break;
		
		case '/':
		cout<<"Div is =" <<n1/n2<<endl;
		break;
		
		
	}
	
}
