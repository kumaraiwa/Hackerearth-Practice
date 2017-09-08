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


#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char c;
    int n, p, cnt = 0, z = 0, idx = -1;
    
    cin >> s;
    n = (int)s.size();
    assert(n >= 1 && n <= 1000);
    
    for ( int i = 0; i < n; i++ ) assert(s[i] >= 'a' && s[i] <= 'z');
    
    cin >> c;
    assert(c >= 'a' && c <= 'z');
    
    cin >> p;
    assert(p >= 1 && p <= n);
    
    for ( int i = 0; i < p; i++ ) cnt += (s[i] == c);
    z = max(z, cnt);
    
    for ( int i = p; i < n; i++ ) {
        cnt -= (s[i - p] == c);
        cnt += (s[i] == c);
        z = max(z, cnt);
    }
    
    if ( z == p ) {
        puts("-1");
        return 0;
    }
    
    p--;
    
    cnt = 0;
    for ( int i = 0; i < p; i++ ) cnt += (s[i] == c);
    
    if ( cnt == z ) idx = p;
    
    for ( int i = p; i < n; i++ ) {
        cnt -= (s[i - p] == c);
        cnt += (s[i] == c);
        if ( cnt == z ) idx = i + 1;
    }
    
    cout << idx << endl;
    
    return 0;
}