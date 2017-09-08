#include <iostream>
using namespace std;
 
 
int main()
{int n;
string str1,str2;
cin>>n;
 
for (int i=0;i<n;i++){
	cin>>str1;
	int j=0;
	for (int i=str1.length()-1;i>=0;i--){
		str2[j]=str1[i];
    	cout<<str2[j];
    	j++;
	
}
cout<<"\n";
}
return 0;
}