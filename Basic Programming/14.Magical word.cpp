/*
 * Magical Word
 *
 *		Author : Vishnu Vijayan
 *		  Date : 09-Jan-2017
 *		  Time : 5:37:06 PM
 *
 */
 
using namespace std;
 
#include<iostream>
#include<cstring>
#include<algorithm>
 
void Initialize(bool prime[])
{
	prime[0] = false;
	prime[1] = false;
 
	for(int i=2;i*i <= 123; ++i)
	{
		if(prime[i])
			for(int j=i*i; j<=123;j += i)
				prime[j] = false;
	}
}
 
int getLeft(int n, bool prime[])
{
	for(int i=n;i>=65;--i)
		if(prime[i])
			return i;
 
	return -1;
}
 
int getRight(int n, bool prime[])
{
	for(int i=n;i<=122;++i)
		if(prime[i])
			return i;
 
	return -1;
}
 
int getMagicChar(char c, bool prime[])
{
	int left_gap = getLeft(c,prime);
	int right_gap = getRight(c, prime);
 
	if(left_gap < 0)
		return right_gap;
 
	if(right_gap < 0)
		return left_gap;
 
	if(c-left_gap < right_gap-c)
		return left_gap;
 
	else if(right_gap-c < c-left_gap)
		return right_gap;
 
	else
		return left_gap;
}
 
string getMagicWord(string s, int n, bool prime[])
{
	string magic_word;
	for(char c : s)
	{
		if(prime[c])
			magic_word += c;
 
		else
			magic_word += (char)getMagicChar(c, prime);
	}
 
	return magic_word;
}
 
int main()
{
	int T;
	cin >> T;
 
	bool primeChars[123];
	memset(primeChars,true,sizeof(primeChars));
 
	Initialize(primeChars);
 
	fill(primeChars, primeChars+65, false);
	fill(primeChars+91, primeChars+97, false);
 
	while(T--)
	{
		int N;
		string S;
		cin >> N >> S;
 
		cout << getMagicWord(S,N, primeChars) << endl;
	}
 
	return 0;
}