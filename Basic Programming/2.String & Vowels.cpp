#include <iostream>

using namespace std;

int main()
{   int a,n;
    a=0;
    cin>>n;
    string str;
    for(int i=0;i<n;i++){
        cin>>str;
        for(int j=0;j<str.length();j++){
            if ((str[j]=='a')||(str[j]=='e')||(str[j]=='i')||(str[j]=='o')||(str[j]=='u')){
                a++;
            }
        }
        cout<<str.length()-a-3<<"/"<<str.length()<<endl;
        a=0;
    }
return 0;
}
