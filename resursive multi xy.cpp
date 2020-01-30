#include<iostream>
using namespace std;
int multi(int x,int y)
{
	if(y==1) 
		return x;
	else
		return x+multi(x,y-1);
}
int main()
{
	int x,y,r;
	cin>>x>>y;
	r=multi(x,y);
	cout<<r;
}

