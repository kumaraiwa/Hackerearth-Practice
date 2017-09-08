#include <iostream>

using namespace std;

int main()
{   int i,n,l,r,k;
    n=0;
    cin >>l>>r>>k;

for (i=l;i<=r;i++){
    if (i%k==0){
        n++;
    }
}
cout<<n<<endl;
return 0;
}


#include <iostream>
using namespace std;
 
int main(){
	int l,r,k,cont=0;
	cin>>l>>r>>k;
	for(int i=l;i<=r;i++){
		if(i%k==0) cont++;
	}
	cout<<cont<<endl;
    return 0;
}