#include <iostream>
using namespace std;

int main ()
{
   string s="navdeep";
   int n=s.length();
   char c[n];

   for (int i=n;i>0;i--){
        c[n-i]=s[i-1];
   }
for (int j=0;j<n;j++){
cout<<c[j];
}
//   cout<<c[0];
}
