#include <iostream>
using namespace std;

int factorial(int N){
    int result;

    if (N == 0){                 // base case
        result= 1;
    }else{
        result= N*factorial(N-1);
    }
    return result;
}
int main(){
	int N,ret;
    cin>>N;
    ret=factorial(N);
	cout<<ret;
}



//factorial of big numbers:
#include <iostream> 
using namespace std;

int main(){
	int n,j=0,temp;
	int arr[200];
	arr[0]=1;
	cout<<"Enter the number.:";
	cin>>n;
	
	for(;n>=2;n--){
		temp=0;
		for(int i=0;i<=j;i++){
			temp=(arr[i]*n)+temp;
			arr[i]=temp%10;
			temp=temp/10;
		}
		while(temp>0){
			arr[++j]=temp%10;
			temp=temp/10;
		}
	}
	for(int i=j;i>=0;i--){
		cout<<arr[i];
	}
}
