#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int, int>
#define pll pair<ll, ll>
#define vpi vector<pi>
#define vpll vector<pll>
#define sz(x) ((int)(x).size())
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int>>
#define  uniq(a) a.resize(unique(a.begin(), a.end()) - a.begin());
#define all(x)      (x).begin(), (x).end()
#define inp(x) for(ll&i:x) cin>>i;
void IOS()
{
 ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
   #ifndef ONLINE_JUDGE 
  #endif
}
#define FAST ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
 
ll mypow(ll a, ll b) {
ll res = 1;
while (b > 0) {
if (b & 1)
res = res * a;
a = a * a;
b >>= 1;
}
return res;
}
ll mypow(ll a, ll b, ll m) {
a %= m;
ll res = 1;
while (b > 0) {
if (b & 1)
res = res * a % m;
a = a * a % m;
b >>= 1;
}
return res;
}
const  ll mod = 1e9 + 7;
const  ll  inf = 1e16;
const  ll N = 2e5 + 10;
 
int main()
{
IOS();
FAST;
ll t;
cin>>t;
while(t--)
{
ll n;
cin>>n;
vector<double> a(n);
for(int i=0;i<n;i++) cin>>a[i];
if(n==2)
cout<<prec(6)<<a[0]+a[1]<<endl;
else
{
    int c=count(a.begin(),a.end(),a[0]);
    if(c==n)
    {
        cout<<prec(6)<<2*a[0]<<endl;
        continue;
    }
//  set<double> s;
//  for(int i=0;i<n;i++)
//  s.insert(a[i]);
 sort(a.begin(),a.end());
//  uniq(a);
//  //cout<<a.size()<<" ";
//  double x=0,y=0;
// for(int i=0;i<a.size()/2;i++)
// {
// x+=a[i];
// }
// ll z=a.size()/2;
// double ans1=x/(int)z;
// //cout<<ans1<<" ";
// for(int i=a.size()/2;i<n;i++)
// {
// y+=a[i];
// }
// int t=n/2;
// if(n%2)
// {
// t=n/2+1;
// }
// double ans2=y/(t);
ll ans1=a[n-1];
double x=accumulate(a.begin(),a.end(),0)-ans1;
double ans2=(x)/(n-1);
cout<<prec(6)<<ans1+ans2<<endl;
}
}
return 0;
}