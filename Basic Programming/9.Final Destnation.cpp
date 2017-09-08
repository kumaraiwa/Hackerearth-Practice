#include <iostream>

using namespace std;

int main(){
    int a=0;
    int b=0;
    string st;
    cin>>st;

    for (int i=0;i<st.length();i++){
        if (st[i]=='R'){
            a++;
        }
        else if (st[i]=='L'){
            a--;
        }
        else if (st[i]=='U'){
            b++;
        }
        else if (st[i]=='D'){
            b--;
        }
    }
    cout<<a<<" "<<b<<endl;
return 0;
}

