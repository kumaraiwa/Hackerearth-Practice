// Bear and Medals
// author: Errichto
#include<bits/stdc++.h>
using namespace std;
int main() {
	int z;
	scanf("%d", &z);
	while(z--) {
		int n;
		scanf("%d", &n);
		int color[3] = {0, 0, 0};
		int result = 0;
		while(n--) {
			int person = 0;
			for(int i = 0; i < 3; ++i) {
				int a;
				scanf("%d", &a);
				person += a;
				color[i] += a;
			}
			result = max(person, result);
		}
		for(int i = 0; i < 3; ++i)
			result = max(result, color[i]);
		printf("%d\n", result);
	}
	return 0;
}