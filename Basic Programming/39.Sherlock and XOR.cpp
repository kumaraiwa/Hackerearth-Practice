/*
For XOR of two numbers to be odd it is necessary that one number should be even and other should be odd. 
So for getting the numbers of pairs you can make two counters 

c_even : for counting even numbers
c_odd : for counting odd numbers 
Hence number of pairs will be = c_even*c_odd
*/
#include <stdio.h>
int main()
{
long long int t,n,i;
long long int arr[100000];
scanf("%d",&t);
while(t--)
{
int c=0,d=0;
scanf("%lld",&n);
for(i=0;i<n;i++)
{scanf("%lld",&arr[i]);}
for(i=0;i<n;i++)
{	if(arr[i]%2==0)
c++;
else
d++;
}
printf("%lld\n",c*d);
}return 0;
}



#include<bits/stdc++.h>
using namespace std;
#define ll long long
int odd[100001],even[100001];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        memset(odd,0,sizeof(odd));
        memset(even,0,sizeof(even));
        ll n,c=0;
        scanf("%lld",&n);
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        if(a[n-1]%2==0)
        {
            even[n-1]=1;
        }
        else
        {
            odd[n-1]=1;
        }
        for(ll i=n-2;i>=0;i--)
        {
            if(a[i]%2==0)
            {
                even[i]=1+even[i+1];
                odd[i]=odd[i+1];
            }
            else
            {
                odd[i]=1+odd[i+1];
                even[i]=even[i+1];
            }
        }
        for(ll i=0;i<n-1;i++)
        {
            if(a[i]%2==0)
            {
                c+=odd[i+1];
            }
            else
            {
                c+=even[i+1];
            }
        }
        printf("%lld\n",c);
    }
    return 0;
}