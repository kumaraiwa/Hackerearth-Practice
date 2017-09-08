#include <iostream>
using namespace std;

int main ()
{
    int i=0,n=0,e=0,s=0;
    cin>>n;

    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    bool done=false;

    cin>>e>>s;

    while(i<n){
        if(e!=s){
            e=a[e-1];
        }if(e==s){
        done=true;
        }
        i++;
    }
    if (done){cout<<"Yes";}
    else{cout<<"No";}

}
