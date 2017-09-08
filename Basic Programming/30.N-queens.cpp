#include <iostream>
using namespace std;

int main(){
  int t;
  cin>>t;

    while(t--){
      int c=0,v=0,x=0;
      string s;
      cin>>s;

    for (int i=0;i<s.length();i++){
    if ((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='y')){
        v++;
      }
    if((s[i]!='a')&&(s[i]!='e')&&(s[i]!='i')&&(s[i]!='o')&&(s[i]!='u')&&(s[i]!='y')){
        c++;
    } }
    if(s.length()>2){
    for (int i=0;i<s.length()-2;i++){

    bool condition1,condition2,condition3;
    condition1=(s[i]!='a')&&(s[i]!='e')&&(s[i]!='i')&&(s[i]!='o')&&(s[i]!='u')&&(s[i]!='y');
    condition2=(s[i+1]!='a')&&(s[i+1]!='e')&&(s[i+1]!='i')&&(s[i+1]!='o')&&(s[i+1]!='u')&&(s[i+1]!='y');
    condition3=(s[i+2]!='a')&&(s[i+2]!='e')&&(s[i+2]!='i')&&(s[i+2]!='o')&&(s[i+2]!='u')&&(s[i+2]!='y');
    if ((condition1)&&(condition2)&&(condition3)){
        x++;
    }
  }
    }
    if((s.length()<2)&&(c>v)){cout<<"hard"<<endl;}
    else if((s.length()<2)&&(v>c)){cout<<"easy"<<endl;}
    else if((c>v)||(x>=1)){cout<<"hard"<<endl;
    }else{cout<<"easy"<<endl;}

}
}

