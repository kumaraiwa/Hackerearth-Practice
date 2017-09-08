#include <iostream>
using namespace std;

int main()
{
      int T;
      cin>>T;
	  long long int a,b,n,c;
      while(T--){
       
        cin>>a>>b;
      	n=a^b;
        c=0;
        while(n)
        {
            n = n & (n-1);
            c++;
        }
        cout<<c<<endl;
      }
}
