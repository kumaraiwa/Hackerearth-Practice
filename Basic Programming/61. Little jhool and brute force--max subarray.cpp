#include <iostream>
using namespace std;
int main()
{
    int i,j,p,n,m,max=0,a,k=0;
    char c,s[1000];
    cin>>s;
    
    cin>>c;
    cin>>p;
    
    
    for(n=0;s[n]!='\0';n++);
    
    for(i=0;i<n-p+1;i++)
   {    m=0;
       for(j=i;j<i+p;j++)
       {  
          if(s[j]==c)
          m++;
          
       }
       if(max<=m&&k==0)
       {
           k=1;
           max=m;
           a=j;
       }
       else if(max==m&&s[j-1]!=c)
       {
           max=m;
           a=j;
       }
       else if(max<m)
       {
           max=m;
           a=j;
           
       }
       
   }
   if(s[a-1]==c)
   { 
    
   cout<<"-1";
   }
   else if(a==1)
   printf("0");
   else if(a==i+p-1||max==0)
   cout<<a;
   else
   cout<<a-1;
    
    
    
    
    return 0;
}