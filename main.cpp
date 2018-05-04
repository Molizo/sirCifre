#include <iostream>

using namespace std;

int cifre[10];

int main()
{int n,v[501];bool done=true;
    cin>>n;
    for(int i=0;i<n;i++)    cin>>v[i];
    while(done)
    {
        done=false;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]+1==v[i+1] || v[i]==v[i+1]-1)
               {
                   v[i]==v[i+1]==-1;
                   done=true;
               }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]!=-1)
            cifre[v[i]]++;
    }
    for(int i=0;i<10;i++)
    {
        if(cifre[i]!=0)
            cout<<i<<" "<<cifre[i]<<"\n";
    }
    return 0;
}
