//pseudocode of gnome sort

gnomesort(a[])
{
pos=0
while(p<length(a))
  if ((pos==0)or(a[pos]>=a[pos-1]))
  pos=pos+1
  else
    swap a[pos] and a[pos-1]
    pos=pos-1
}

//optimised algorithm of gnome sort

gnomesort(a[])
{
  for pos in 1 to length(a)
  gnomesort(a, pos)
}

gnomesort(a[],upper)
{
  pos=upper
  while((pos>0)and (a[pos-1]>a[pos]))
    swap a[pos-1] and a[pos]
    pos=pos-1
}

time complexity O(n^2)

//code for gnome sort

#include<iostream.h>
void swap(int &a,int &b)
{
  int temp;
  temp=a;
  a=b;
  b=temp;
}

void gnomesort( int a[100], int n)
{
  int f=0;
  while(f<n)
  {
    if(f==0)
    f++;
    else
    {
    if(a[f]>=a[f-1])
    f++;
    else
    {
      swap(a[f],a[f-1];
      f--;
    }
    }
 }
 
 int main()
 {
 int p[100],n;
 cout<<"Enter number of elements ";
 cin>>n;
 cout<<"Enter elements"<<endl;
 for(int i=0;i<n;i++)
 {
 cin>>p[i];
 }
 gnomesort(p,n);
 cout<<"Sorted array"<<endl;
 for(i=0;i<n;i++)
 cout<<p[i]<<" ";
 }
