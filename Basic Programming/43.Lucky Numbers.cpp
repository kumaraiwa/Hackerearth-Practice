#include <iostream>
using namespace std;
int main()
{
unsigned long long int i,s=0,l=0,t,n,j;
cin>>t;
while(l<t)
{
cin>>n;
s=0;
for(i=2;i<n;i=i*2)
{
for(j=1;j<i;j=j*2)
{
if(i+j<=n)
s=(s+i+j)%1000000007;
}
}
cout<<s%1000000007<<"\n";
l++;
}
return 0;
}
