#include<iostream>
using namespace std;
int main()
{
	int x,y,ans=1;
	cin>>x;
	cin>>y;
	while(y!=0)
	{
		ans*=x;
		y--;
	}
	cout<<ans;
	return 0;
}
