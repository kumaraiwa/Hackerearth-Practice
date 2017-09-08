#include <iostream>
#include <sstream>
using namespace std;

int main(){
    int t,sum,b,pos;
    long int n;
    //cin>>t;
    //while(t--){

        cin>>n;
        char a[n];
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        for (int i=0;i<n;i++){
            sum=0;

            string str;
            ostringstream temp;
            temp<<a[i];
            str=temp.str();
            for(int j=0;j<str.length();j++){
                if(str[j]=='0'){
                    sum+=4;
                }
                else if(str[j]=='1'){
                    sum+=2;
                    }
                    else if(str[j]=='2'){
                    sum+=5;
                    }
                    else if(str[j]=='3'){
                    sum+=5;
                    }
                    else if(str[j]=='4'){
                    sum+=4;
                    }
                    else if(str[j]=='5'){
                    sum+=5;
                    }
                    else if(str[j]=='6'){
                    sum+=6;
                    }
                    else if(str[j]=='7'){
                    sum+=3;
                    }
                    else if(str[j]=='8'){
                    sum+=7;
                    }
                    else if(str[j]=='9'){
                    sum+=6;
                    }
            }
            if(b<sum){
                b=sum;
                pos=i;
            }
        }
    //}
    cout<<pos<<endl;
    cout<<sum<<endl;

}

