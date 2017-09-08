#include <iostream>
#include<math.h>
using namespace std;
int main()
{
long long int t,x,n;
cin>>t;
while(t--)
{ n=0;
cin>>x;

while(x)
{
if(x%2==0)
n++;
x=x/2; 
}
n=pow(2,n)-1;
cout<<n<<endl;

}
return 0;
}