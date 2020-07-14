#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s;
	    cin>>n>>s;
	    int a[n];
	    for(int i=0;i<n;i++)    cin>>a[i];
	    int p=0,temp=0,z=0;
	    for(int i=0;i<n;i++)
	    {
	        temp += a[i];
	        while(temp>s)
	            temp -= a[p++];
	        if(temp==s)
	        {   cout<<p+1<<" "<<i+1<<endl;
	            z=1;
	            break;
	        }
	    }
	    if(z==0)
	        cout<<"-1"<<endl;
	}
	return 0;
}
