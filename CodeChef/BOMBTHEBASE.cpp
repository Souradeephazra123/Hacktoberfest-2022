//Problem Code: BOMBTHEBASE

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int v[100001];
	    for (int i = 0; i < n; i++) {
	        cin>>v[i];
	      }
	      reverse(v,v+n);
	    int xx=n;
	    for (int i =0;i<n;i++) {
	       if(v[i]>=x)
	        continue;
	        else
	        {
	            xx=i;
	            break;
	        }
	    }
	    cout<<n-xx<<endl;
	}
	return 0;
}
