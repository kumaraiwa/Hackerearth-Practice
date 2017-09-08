#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int t,l,m,n;
    cin>>t;
    while(t--){
    int s=0;
    cin>>n;
    char a[n][n];
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];
            if(a[i][j]=='*'){
                l=i;
                m=j;
            }
        }
    }
    s=abs(((n-1)/2)-l)+abs(((n-1)/2)-m);
    cout<<s<<endl;
}

}
