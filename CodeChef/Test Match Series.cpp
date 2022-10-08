#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
int main()
{
ll t;
cin>>t;
while(t--)
{
int ans[5];
for(int i=0;i<5;i++)
cin>>ans[i];
int india=0,eng=0;
for(int i=0;i<5;i++)
{
    if(ans[i]==1)
    india++;
    if(ans[i]==2)
    eng++;
}
if(india>eng)
cout<<"INDIA\n";
else if(eng>india)
cout<<"ENGLAND\n";
else
cout<<"DRAW\n";
}
return 0;
}