#include <iostream>
using namespace std;
#include <cmath>
int main(){
    int t;
    cin>>t;
    for(int v=1;v<=t;v++){
        int n,x,sum;
        cin>>n;
        int a[n],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
            cin>>sum;
            for(i=0;i<pow(2,n);i++){
                x=0;
                for(j=0;j<n;j++){
                    if(i & 1<<j)
                        x+=a[j];
                }
            if(x==sum){
                cout<<"YES"<<endl;
                break;
            }
        }
    if(i==pow(2,n))
        cout<<"NO"<<endl;
    }
return 0;
}





#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n;
		scanf("%lld",&n);
		ll p=1<<n;
		ll a[n],i;
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		ll f;
		scanf("%lld",&f);
		ll j,sum=0,flag=0;
		for(i=0;i<p;i++)
		{
			sum=0;
			for(j=0;j<n;j++)
			{
				if((i>>j) & 1)
				sum+=a[j];
			}
			if(sum==f)
			{
				flag=1;
				break;
			}
		}
		//printf("sum=%lld\n",sum);
		if(flag)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}