#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<endl;
    if (m*n%2 == 0)
    {
        cout<<m*n/2;
    }
    else
    {
        cout<<(m*n-1)/2;
    }
    
    
}