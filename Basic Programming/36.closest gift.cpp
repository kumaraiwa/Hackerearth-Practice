#include <iostream>
#include <cmath>
using namespace std;
int main ()
{  bool prime=true;
   int n,i=2,j,kq=0,a,mn=0,t=2,b,k;
   cin >> n;
   j=n-1;
   k=n+1;

   for (int i = 2; i*i <= n; ++i){
        if(n%i == 0){
            prime=false;
        }
    }
    if (n==0){
		cout<<2<<endl;
	}
	else if(n==1){
		cout<<1<<endl;
	}
   else if(prime){
    cout<<0<<endl;
   }
	else if (!prime){
		while (j<n&&j>0){       //this is to search the nearest prime from the left side of n
   
       kq=0;
       i=2;
       while (i<=pow(j,0.5))
       {
           if (j%i==0)
           {
                i=2;   //if kq remains zero after the whole loop then the
               kq++;   //current j is a prime number since it's not
               break;  //divisible for any numbers from 2 to sqrt(j)
            }
            i++;
       }
       if (kq==0)
        {
            break;
        }
        --j;
   }
    while (k>n) // this is for the right side of n
       {
       mn=0;
       t=2;
       //k=n+1;
       while (t<=pow(k,0.5))
       {
           if (k%t==0)
           {
               t=2;   // mn is the same as kq
               mn++;
               break;
            }
            t++;
       }
       if (mn==0)
        {
            break;
        }
        ++k;
       }
       //if(n){cout<<0<<endl;}
  if ((n-j)<(k-n))        // if the distance from n to the j is smaller than
  cout <<n-j<< endl;      // the distance from n to k then we print out n
  if ((n-j)>=(k-n))        // and the other way aroumd. if they are equal
  cout <<-1*(n-k) << endl;      // then print out both.
  //if ((n-j)==(k-n))
  //cout << j << " " << k << endl;
return 0;
}
}
