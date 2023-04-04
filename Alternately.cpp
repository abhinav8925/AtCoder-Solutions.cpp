
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
      string s;
      cin>>s;
      bool ans=true;
  
  for(int i=1;i<n;i++)
  {
    if(s[i]==s[i-1])
       {
         ans=false;
         break;
       }
  }
      if(ans)
       	cout << "Yes" << endl;
      else
       	cout << "No" << endl;

}
