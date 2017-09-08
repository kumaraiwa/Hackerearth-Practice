#include <iostream>
using namespace std;

int main ()
{
    int n,j=0;
    string s;

    cin>>s>>n;

    while (j<n){
        if (s[j]!='9'){
            s[j]='9';
            j++;
        }else if(s[j]=='9'){
            j++;
            n++;
            }
}
cout<<s;
}



//or


#include <stdio.h>
 
int main()
{
    char x[20];
    int k;
    scanf("%s %d",x,&k);
    int s=strlen(x);
    int i;
    for(i=0;k>0;){
    	if(x[i]!='9'){
    		x[i]='9';
    		k--;
    	}
    	i++;
    	
    }
    printf("%s",x);
    return 0;
}


#include <iostream>
using namespace std;

int main ()
{
    int n,m=0,l=0;
    string s;

    cin>>s>>n;
    
    for (int j=0;j<n;j++){
            if (s[j]=='9'){
                m++;
            }
    }
    for (int j=n;j<=n+m;j++){
            if (s[j]=='9'){
                l++;
            }
    }

    for (int i=0;i<n+m+l;i++){
        s[i]='9';
    }
    cout<<s;
   
}
