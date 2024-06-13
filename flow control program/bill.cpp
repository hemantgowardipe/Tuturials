using namespace std;
#include<iostream>
int main()
{
	int pizza , puffs , colddrink , total;
	cout<<"Enter the no of pizza's bought";
	cin>>pizza;

	cout<<"Enter the no of puffs bought";
	cin>>puffs;
	
	cout<<"Enter the no cold drink bought";
	cin>>colddrink;

	total = pizza*100+puffs*20+colddrink*10;
	cout<<"Total Bill is"<<total;
}