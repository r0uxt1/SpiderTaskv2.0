#include<iostream>
using namespace std;

/*
if b is even:
(a ^ b) % c = ((a ^ b/2) * (a ^ b/2))%c 
			= {(a^b/2 %c)*(a^b/2 %c)} % c
			=>  [call function for a,b/2,c]

if b is odd:
(a ^ b) % c = (a * (a ^( b-1))%c
			= {a%c *a^(b-1)%c}%c
			=> [call func for a,b-1,c]
*/

int modularExp(int a, int b, int c)
{
	if(a==0)				//terminating recurrence return result
		return 1;
	
	else if(b==0)
		return 1;
	
	long y;					//stores final value

	if(b%2==0)
		{
			y=modularExp(a,b/2,c);
			y=(y*y)%c;
		}
	else
		{
			y=modularExp(a,b-1,c);
			y=((a%c)*y)%c;
		}
	return (int)((y + c) % c);  	//to ensure function works even for negative y
}

int main()
{
	int a,b,c,result;
	cout<<"Enter values of a b c";
	cin>>a>>b>>c;
	result=modularExp(a,b,c);
	cout<<"The value of a^b %c is "<<result;
}
