#include<iostream>
using namespace std;
int main()
{
	int x,y,ans;
	cin>>x>>y;
	if(y%2==0)
	{
		for(int i=1;i<=y;i++)
		{
			ans=2*(x,y/2);
		}
	else
		for(int i=1;i<=y;i++)
		{
			ans=2*(x,y/2)+x;
		}
	}
	return 0;
}
