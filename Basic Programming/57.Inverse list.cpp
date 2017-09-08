#include <iostream>
using namespace std;
 
int main()
{
    int t,n,m,i,j,a,b,c,x,y,s=0,k;
    cin >>t;
    for(i=0;i<t;i++)
    {
        x=1;
        y=1;
        s=0;
        cin>>n>>m;
        cin>>c;
        for(j=0;j<c;j++)
        {
            cin>>a>>b;
            for(k=0;;k++)
            {
                if(x+a<=n&&x+a>=1&&y+b<=m&&y+b>=1)
                {
                    x=x+a;
                    y=y+b;
                    s++;
                }
                else
                break;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}