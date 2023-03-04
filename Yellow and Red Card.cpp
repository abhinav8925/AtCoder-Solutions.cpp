/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 4th March 2023
  Code by - Abhinav Anand

  Problem link -> https://atcoder.jp/contests/abc292/tasks/abc292_b

*/

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

bool isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}


void solve()
{
    
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=1;i<=n;i++)
        a[i]=0;
    
    while(q--)
    {
        int c,x;
        cin>>c>>x;
        if(a[x]>=2)
            a[x]=103;
        if(c==1)
            a[x]++;
        else if(c==2)
            a[x]+=2;
        else if(c==3)
        {
            if(a[x]==0)
                cout << "No" << endl;
            else if(a[x]==1)
                cout << "No" << endl;
            else if(a[x]>=2)    
                cout << "Yes" << endl;
        }
        
    }
    
}

int main() {
	
	
    solve();
	
	return 0;
}
