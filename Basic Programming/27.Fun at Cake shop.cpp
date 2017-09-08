#include <iostream>
using namespace std;

int main()
{
    int n,c=0,d=0,i=1;
    cin>>n;


    while (n>1){
       n=n-i;
       if (n<=0){
           cout<<"Darshak";
           break;
       }
       n=n-(i*i);
       if (n<=0){
           cout<<"Chandan";
           break;
       }
        i++;
    }


}
