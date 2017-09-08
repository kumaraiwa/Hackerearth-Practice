#include <iostream>
using namespace std;



int main()
{   int T;

    cin>>T;

    while(T--){
    long int product=1;
    string input;
    cin >> input;

    if (input == string(input.rbegin(), input.rend())){
        cout <<"Palindrome"<<endl;
    }
    else{
            for (int i=0;i<input.length();i++){
                product=product*(int(input[i])-96);
            }
        cout<<product<<endl;
    }
    }
}
