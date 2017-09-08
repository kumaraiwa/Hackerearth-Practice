#include <iostream>
using namespace std;
 
int main()
{
    int n;
    string str;
    int a[7]={0,0,0,0,0,0,0};
    cin>>n;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        switch(str[i])
        {
        case 'h':a[0]++;
            break;
        case 'a':a[1]++;
            break;
        case 'c':a[2]++;
            break;
        case 'k':a[3]++;
            break;
        case 'e':a[4]++;
            break;
        case 'r':a[5]++;
            break;
        case 't':a[6]++;
            break;
        default:
            break;
        }
    }
    a[0]/=2;
    a[1]/=2;
    a[4]/=2;
    a[5]/=2;
 
int min=a[0];
 
for(int i=0;i<7;i++)
{
    
    if(a[i]<min)
    min=a[i];
}
 
 
    cout << min;
    return 0;
}
Language: C++