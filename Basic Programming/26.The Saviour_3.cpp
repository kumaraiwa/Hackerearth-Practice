#include <iostream>
using namespace std;

int main()
{   int T;
    cin>>T;

    while(T--){
        int n,c=0;
        cin>>n;
        int a[n];
        for (int x=0;x<n;x++){
            cin>>a[x];
        }
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                if( ( ! (i==j) )&&(i<j)&&(a[i]!=a[j])){
                    if((a[i]+a[j])%2==0){
                        c++;
                }
                }

            }
        }
       cout<<c<<endl;
   }
}
