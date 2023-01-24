/*

    JAI SHREE KRISHNA

    Date -> 24th January 2023
    Code By -> Abhinav Anand
    
    Problem Link -> https://atcoder.jp/contests/abc286/tasks/abc286_b

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  string k="";
  for(int i=0;i<n;i++)
    {
        if(s[i]=='n' && s[i+1]=='a')
        {
            k+='n';
            k+='y';
            k+='a';
            i++;
        }
        else
            k+=s[i];
    }
    cout << k << endl;
 }
    
