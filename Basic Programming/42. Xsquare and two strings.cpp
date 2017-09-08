#include <iostream>
using namespace std;
 
int main() {
    int n1,n2,mask1,mask2;
    string s1,s2;
    int T;
    cin>>T;
    for(int testCase = 1; testCase <= T; testCase++)
    {
        cin >> s1 >> s2;
        n1 = (int)s1.size(), n2 = (int)s2.size();
        mask1 = mask2 = 0;
        for ( int i = 0; i < n1; i++ ) mask1 = mask1 | (1<<(s1[i]-'a'));
        for ( int i = 0; i < n2; i++ ) mask2 = mask2 | (1<<(s2[i]-'a'));
        for ( char p = 'a'; p <= 'z'; p++ ) {
            if ( mask1 & (1<<(p-'a')) ) {
                if ( mask2 & (1<<(p-'a')) ) {
                    cout << "Yes" << endl;
                    goto p1;
                }
            }
        }
        cout << "No" << endl;
    p1: { }
    }
}



#include <iostream>
#include<string>
using namespace std;
string s1,s2;

int main(){
    int t,count1[26],count2[26],i;
    cin>>t;
    while(t--){
        s1.clear();
        s2.clear();
        cin>>s1>>s2;

        for(int i=0;i<26;i++){
            count1[i]=0;
            count2[i]=0;
        }
        for(int i=0;i<s1.size();i++){
            count1[s1[i]-'a']++;
        }
        for(int i=0;i<s2.size();i++){
            count2[s2[i]-'a']++;
        }
        for(i=0;i<26;i++){
            if(count1[i]>0&&count2[i]>0){
                cout<<"Yes"<<endl;
                    break;
            }
        }
        if(i==26){
            cout<<"No"<<endl;}
        }
    return 0;
}







