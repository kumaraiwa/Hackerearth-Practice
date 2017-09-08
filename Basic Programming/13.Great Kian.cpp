#include<bits/stdc++.h>
const int N = 100031;
using namespace std;
int n;
int ar[N];
long long res[10];
int main(){
	ios_base::sync_with_stdio(0);
	//cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	for (int i = 0; i < 3; i++)
	{
		int cur = i;
		do
		{
			res[i] += ar[cur];
			cur += 3;
		} while (cur < n);
	}
	for (int i = 0; i < 3; i++)
	{
		if (i)
			cout << " ";
		cout << res[i];
	}
	cout << endl;
	return 0;
}