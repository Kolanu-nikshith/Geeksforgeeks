#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
	//code
    int t;cin >> t;
	while(t--)
	{
	    int n;cin >> n;
	    int c = 0, a[n];
	    for(int i=0; i<n; i++)    cin >> a[i];
	    sort(a,a+n);
	    int j,k;
	    for(int i=n-1;i>1;i--){
	        j=0,k=i-1;
	        while(j<k){
	        if(a[j]+a[k]==a[i]){c++;j++;k--;}
	        else if(a[j]+a[k] < a[i]){j++;}
	        else k--;
	    }}
	    if(c==0) cout<<"-1"<<endl;
	    else cout<<c<<endl;
	    
	    
	    
	}
	    
	return 0;
}
