#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int T, N, K, count, i, p, sum=0;
    cin >> T;
    vector<int> o;	// to store number of set bits for each number
    while(T--){
        //count = 0;
        cin >> N >> K;
        int a[N];	// to store N elements given by baker
        for(i=0; i<N; i++){
            count = 0;
            cin >> a[i];
            p = a[i];
            while(p){	// to check number of set bits{
                p = p&(p-1);
                count++;
            }
            o.push_back(count);	// stores # of set bits for each item in a vector
        }
        sort(o.begin(),o.end());	//to get max no. set bits for each number
        sum = 0;
        i = o.size()-1;
        while(K--){	//to find items with maximum set bits
            sum = sum + o[i];
            i--;
        }
        cout << sum << "\n";
        o.clear();	// clears vector for next test cases
    }
return 0;
}





#include <iostream>

int main()
{
	int t, n, k;
	long long int cur, c, sum;
	long long int num[100000];
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		sum = 0;
		std::cin >> n >> k;
		//input array
		for (int j = 0; j < n; j++) {
			std::cin >> num[j];
		}
		//replace all elements with the number of their set bits
		for (int j = 0; j < n; j++) {
			c = 0;
			cur = num[j];
			while (cur) {
				cur = cur & (cur - 1);
				c++;
			}
			num[j] = c;
		}
		//sort array
		for (int j = n - 1; j >= 1; j--) {
			for (int k = 0; k < j; k++) {
				if (num[k] < num[k + 1]) {
					cur = num[k];
					num[k] = num[k + 1];
					num[k + 1] = cur;
				} 
			}
		}
		//calculate sum of first k elements
		for (int j = 0; j < k; j++) {
			sum += num[j];
		}
		std::cout << sum << std::endl;
	}
}




#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int v1=1;v1<=t;v1++){
        int n,k,sum=0;
        cin>>n>>k;
        vector<int> v;
        for(int i=1;i<=n;i++){
            int d;
            cin>>d;
            v.push_back(__builtin_popcount(d));
        }
        sort(v.begin(),v.end());
        for(int i=0;i<k;i++)
            sum+=v[n-k+i];
            cout<<sum<<"\n";
        }


return 0;
}





