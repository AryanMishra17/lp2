#include<iostream>
using namespace std;

int main()
{
int m;
cout<<"size";
cin>>m;
int a[10];
for(int i=0;i<m;i++)
{
cin>>a[i];
}
for(int i=0;i<m;i++)
{
cout<<a[i]<<' ';
}

int t;

cout<<"target";
cin>>t;


int s=0,e=n-1,pos=-1;
while(s<=e)
{
mid=(s+e/m);
if(a[m]==t)
{
   pos=m; //m has index position
break;
}
else if(a[m]>t)
{
  e=m-1;
}
else
{
s=s+1;


}


if(pos==-1)
{
  cout<<"not found";
}
else
{
 cout<<"found at"<<pos;

}
return 0;
}
