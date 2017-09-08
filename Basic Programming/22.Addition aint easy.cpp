#include <iostream>
using namespace std;

int main ()
{  
    
   int t,sum=0;
   cin>>t;
while(t--){
   string s;
   cin>>s;
   int n=s.length();
   char c[n];

   for (int i=n;i>0;i--){
        c[n-i]=s[i-1];
    }

    for (int i=0;i<n;i++){
        sum=int(c[i])+int(s[i]);

        if (sum <=218){
            cout<<char(sum-96);
        }
        else if (sum>218){
            cout<<char(sum-122);
        }

    }
    cout<<endl;
    sum=0;
}
}
