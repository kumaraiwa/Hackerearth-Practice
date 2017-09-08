#include <iostream>
using namespace std;

int main(){
	int T; 
	cin >> T;
	while(T--){
		int N;
		cin >> N;
		int count(0);
		for (int x = 1; x < N; ++x)
			for (int y = x + 1; y <= N; ++y)
				if ((x ^ y) <= N)
					++count;
			cout << count << '\n';
		}
		return 0;
}