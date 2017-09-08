#include <iostream>
using namespace std;

int main ()
{   int l=0,o=0,v=0,e=0;
    string s;
    cin>>s;

    for (int i=0;i<s.length();i++){
            if ((s[i]=='l')&&((o==0)&&(v==0)&&(e==0))){
                l++;
                }if((s[i]=='o')&&l>=1){
                    o++;
                    }if ((s[i]=='v')&&o>=1){
                        v++;
                        }if((s[i]=='e')&&v>=1){
                            e++;
                        }
    }
    if (e>=1){
        cout<<"I love you, too!";
    }else{
        cout<<"Let us breakup!";
    }

}
