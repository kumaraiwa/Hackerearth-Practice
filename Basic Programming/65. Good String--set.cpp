#include <iostream>
#include <set>
using namespace std;

int main(){
    string s;
    cin>>s;

    set <int> s1;
    for(int j=0;j<s.length();j++){
			s1.insert(s[j]);
		}
    cout<<s.length()-s1.size();
}


