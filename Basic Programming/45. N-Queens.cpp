#include<iostream>
using namespace std;
 
int isattacked(int x,int y,int **b,int N)
    {   int i,j;
        for(i=0;i<N;i++)
        {
            if(b[x][i]==1)
                return 1;
        }
        for(i=0;i<N;i++)
        {
            if(b[i][y]==1)
                return 1;
        }
       for(i=x,j=y;(((i>=0)&&(i<N))&&((j<N)&&(j>=0)));i++,j++)
       {
           if(b[i][j]==1)
            return 1;
       }
        for(i=x,j=y;(((i>=0)&&(i<N))&&((j<N)&&(j>=0)));i--,j++)
        {
            if(b[i][j]==1)
            return 1;
        }
        for(i=x,j=y;(((i>=0)&&(i<N))&&((j<N)&&(j>=0)));i++,j--)
        {
            if(b[i][j]==1)
            return 1;
        }
        for(i=x,j=y;(((i>=0)&&(i<N))&&((j<N)&&(j>=0)));i--,j--)
        {
            if(b[i][j]==1)
            return 1;
        }
 
 
        return 0;
 
    }
 
int nqueen(int **b,int N,int K)
{
    if(N==0)
    { return 1;}
 
    for(int i=0;i<K;i++)
           {
 
            for(int j=0;j<K;j++)
               {
 
                if(isattacked(i,j,b,K))
                   {
 
                    if(((i+1)==K)&&((j+1)==K))
    {
     return 0;
    }
 
                   }
                else
                {
                    b[i][j]=1;
                    if(nqueen(b,N-1,K))
                    {
                        return 1;
                    }
                    else
                        b[i][j]=0;
                }
               }
           }
 
 
 
    return 0;
}
 
int main()
{   int n,i,j;
    cin>>n;
   int **arra;
 arra = new int *[n];
for(i=0;i<n;i++)
    arra[i] = new int[n];
for(i=0;i<n;i++)
            {for(j=0;j<n;j++)
                arra[i][j]=0;
 
            }
 
 
 
  if((nqueen(arra,n,n))&&(n!=0))
     {for(i=0;i<n;i++)
            {for(j=0;j<n;j++)
                cout<<arra[i][j]<<" ";
                cout<<endl;
            }
     }
  else
  {
      cout<<"Not possible";
  }
 
return 0;
}