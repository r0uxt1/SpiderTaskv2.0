£include<iostream.h>
£include<math.h>
£include<conio.h>
£include<stdlib.h>
{
void main()
{
clrscr();
int a,b,c,p,rslt;
cout<<"enter a,b,c with which u want to perform (a^b)%c,where (c!=0)";
cin>>a>>b>>c;
if(a==0&&b==0)
{
cout<<"invalid input";
exit(0);
}
p=pow(a,b);
rslt=p%c;
cout<<"THE RESULT IS:"<<rslt;
getch();
}

