/*

    JAI SHREE KRISHNA

    Date -> 11th February 2023
    Code By -> Abhinav Anand
    
    Problem Link -> https://atcoder.jp/contests/abc289/tasks/abc289_a

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
  string s;
  cin>>s;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='1')
      	s[i]='0';
   else
     	s[i]='1';
  }
 cout << s <<endl;
 }
    
