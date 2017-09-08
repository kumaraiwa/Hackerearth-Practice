#include<bits/stdc++.h>
using namespace std;
bool isConsonant(char let) {
	string vowels = "aeiouy";
	for(char vowel : vowels)
		if(vowel == let)
			return false; // not a consonant
	return true;
}
void te() {
	char s[55];
	scanf("%s", s);
	int n = strlen(s);
	bool easy = true;
	// check for 3 consecutive
	for(int i = 0; i < n - 2; ++i)
		if(isConsonant(s[i]) && isConsonant(s[i+1]) && isConsonant(s[i+2]))
			easy = false;
	// count total number of consonants
	int cntConso = 0;
	for(int i = 0; i < n; ++i)
		cntConso += isConsonant(s[i]);
	if(cntConso > n - cntConso)
		easy = false;
	// print the answer
	if(easy) puts("easy");
	else puts("hard");
}
int main() {
	int T;
	scanf("%d", &T);
	while(T--) te();
	return 0;
}