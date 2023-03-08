#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int val=n*(n+1)/2;
for(int i=n;i>=1;i--)
{
for(int j=i;j>=1;j--)
//cout<<val++<<" ";
cout<<val--<<" ";
cout<<endl;
}
}
