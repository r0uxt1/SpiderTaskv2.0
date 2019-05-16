#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	int b;
	int p;
	cin>>a>>b>>p;
	/* 
	
	(a^b)modp is the form
	
	*/
	int x = 1;
	a = a%p;
	while(b>0)
	{
		if(b&1)
		x = (x*a)%p;
		b = b>>1;
		a = (a*a)%p;
	}
	cout<<x<<endl;
}
