#include <iostream>
using namespace std;

int main ()
{
    int n,mi,ma;
    cin>>n;
    int a[n];
    bool present;

    for (int i=0;i<n;i++){
        cin>>a[i];
    }

    mi=ma=a[0];

    for (int i = 0; i < n; i++){
        if(a[i]>ma){
            ma=a[i];
        }
         if(a[i]<mi){
            mi=a[i];
        }
    }
    for (int i=mi+1;i<ma;i++){
            present=false;
        for (int j=0;j<n;j++){
            if(a[j]==i){
                present=true;
            }

    }
    if (present==false){
        break;
        }
    }
      if (present)
        cout << "YES";
      else
        cout << "NO";

}
