#include <iostream>
using namespace std;

int main()
{
int t;
cin>>t;
for(int v=1;v<=t;v++)
{
int n,i,c=0;
cin>>n;
string x;
cin>>x;
for(i=0;i<x.size();i++)
{
if(x[i]=='1')
c++;
}
cout<<c<<endl;
}
return 0;
}