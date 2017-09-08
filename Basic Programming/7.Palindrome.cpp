#include <iostream>
using namespace std;



int main()
{
    string input;
    cin >> input;

    if (input == string(input.rbegin(), input.rend())){
        cout <<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}



#include <iostream>
using namespace std;

int main()
{   int n;
cin>>n;
 while(n--){
    string str;
    cin >> str;
    int x=str.length();
    if (str == string(str.rbegin(), str.rend() )&&(x%2==0) ){
        cout <<"YES EVEN"<<endl;
    }
else if(str == string(str.rbegin(), str.rend() )&&(x%2!=0) ){
       cout <<"YES ODD"<<endl;
}
    else{
        cout<<"NO"<<endl;
    }
 }
}





#include <stdio.h>
#include <algorithm>
#include <string.h>
 
int main() {	
	char s[101];
	int n;
	bool a = true;
	scanf("%s", s);
	n = strlen(s);
	for(int i = 0; i < (n / 2); i++) {
		if(s[i] != s[n - 1 - i]) {
			a = false;
			break;
		}
	}
	if(a) {
		printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}
