#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
   string s;
   int len,cnt=0,i;
   cin>>s;
  len = s.length();
  for(int j=0;j<10;j++){
     for(i=0;i<len;i++){
        if((((int)s[i])-48) == j){
          cnt++;
        }
    }
    cout<<j<<" "<<cnt<<endl;
    cnt=0;
  }
return 0;
}