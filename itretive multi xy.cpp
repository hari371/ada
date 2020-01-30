#include<iostream>
using namespace std ;
int main()
{
	int x,y,ans=0;
	cout<<"Enter the first value";
	cin>>x;
	cout<<"Enter the multiplyer";
	cin>>y;
	for(int i=1;i<=y;i++)
	{
		ans+=x;
	}
	cout<<ans;
	return 0;
}
