#include<iostream>
using namespace std;

int main()

{
	int a,b,c,u,t;
	
	cin>>a>>b>>c;
	t=a;
	for(int i=1;i<b;i++)
	{
		t=a*t;
	}
	
	cout<<t<<endl;
	
	u=t%c;
	while(u>c)
	{
	u=u%c;	
	}
	
	cout<<u;
}
