//Problem Code:JMARKET

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,a,b,c,minn2=0;
	    cin>>x>>a>>b>>c;
	    vector<int> v;
	    v.push_back(a);
	    v.push_back(b);
	    v.push_back(c);
	    sort(v.begin(),v.end());
	    
	   
        int count = v[0]*(x-2);
        count += (v[1] + v[0]);
        cout<<count<<endl;
	}
	return 0;
}
