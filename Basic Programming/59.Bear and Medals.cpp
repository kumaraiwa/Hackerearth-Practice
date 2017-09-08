#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    int T,N,M;
    cin>>T;
    while(T--)
    {
     cin>>N>>M;
     //cout<<M;
  int flag=0;     
     int *start=new int [N],*end=new int [N],*F=new int [N];
     for(int i=0;i<N;i++)
     {
      cin>>start[i]>>end[i];
      //cout<<start[i]<<" "<<end[i]<<endl;
     }
     int passen=0;
     double cost=0;
     for(int i=0;i<=100;i++)
     {
      //cout<<i<<":";
      if(passen==1)
       cost+=10.0;
      else if(passen==2)
       cost+=19.0;
      else
       cost+=(9.3*passen);
      for(int j=0;j<N;j++)
       if(end[j]==i && F[j]==1)
       { passen--;
        //cout<<i<<" ";
       }
      for(int j=0;j<N;j++)
       if(start[j]==i && passen<M && start[j]!=end[j])
       {
        passen++;
        F[j]=1;
       }
       else if(start[j]==i && passen==M)
        end[j]=-1;
      if(passen==M)
       flag=1;
       
     }
     int C=cost;
     double diff=cost-C;
     if(diff<0.5)
      cout<<C;
     else
      cout<<C+1;
     
     if(flag==1)
      cout<<" Cab was full";
     cout<<endl;
     
    }
    return 0;
}