#include <iostream>

using namespace std;

int main(){
    string str;
    cin>>str;
    bool condition;

    for (int i=0;i<str.length()-5;i++){
        condition=(str[i]==str[i+1])&&(str[i+1]==str[i+2])&&(str[i+2]==str[i+3])&&(str[i+3]==str[i+4])&&(str[i+4]==str[i+5]);
        if (str.length()<6){
            break;
        }
        else if (str.length()>=6){
            if (condition){
                cout<<"Sorry, sorry!"<<endl;
                break;
            }
        }
    }
    if ((!condition)||(str.length()<6)){
        cout<<"Good luck!"<<endl;
    }
return 0;
}

