#include<bits/stdc++.h>
#define assn(n,a,b) assert(n<=b && n>=a)
using namespace std;
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,b) for(i=0;i<b;i++)
#define rep1(i,b) for(i=1;i<=b;i++)
#define pdn(n) printf("%d\n",n)
#define sl(n) scanf("%lld",&n)
#define sd(n) scanf("%d",&n)
#define pn printf("\n")
typedef pair<int,int> PII;
typedef vector<PII> VPII;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long LL;
#define MOD 1000000007
LL mpow(LL a, LL n) 
{LL ret=1;LL b=a;while(n) {if(n&1) 
    ret=(ret*b)%MOD;b=(b*b)%MOD;n>>=1;}
return (LL)ret;}
int cnt(int d, int m, int y){
    if(y==0)return 0;
    int x=y/100;
    int ret=max(x,0)*11;
    ret += max(0,min(13,(y%100)-1)-2);
//    cout << d << m<<y << ret << endl;
    if(m>y%100-1 and y%100>=3)ret++;
    else if(m==y%100-1 and d>=y%100-2 and y%100>2)ret++;
    return ret;
}
int ar[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool leap(int y){
    if(y%4==0){
        if(y%100==0){
            if(y%400==0)return true;
            return false;
        }
        return false;
    }
    return false;
}
int main()
{
    int t;
    sd(t);
    getchar();
    while(t--){
        int d1,m1,y1,d2,m2,y2,ans=0;
        scanf("%d:%d:%d %d:%d:%d",&d1,&m1,&y1,&d2,&m2,&y2);
        if(d1==1){
            if(m1==1){
                d1=31;
                m1=12;
                y1--;
            }
            else{
                m1--;
                if(m1==2){
                    if(leap(y1))d1=29;
                    else d1=28;
                }
                else d1=ar[m1];
            }
        }
        else d1--;
//        cout << d1 << " " << m1 << " " << y1 << endl;
        cout << cnt(d2,m2,y2) -  cnt(d1,m1,y1) << endl;
    }
    return 0;
}