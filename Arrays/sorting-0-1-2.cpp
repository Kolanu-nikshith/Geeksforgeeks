#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int i;
	   int b[3]={0};int n;cin>>n; int a[n];
	   for( i=0;i<n;i++){ cin>>a[i];
	       if(a[i]==0) b[0]++;
	       if(a[i]==1) b[1]++;
	       if(a[i]==2) b[2]++;
	   }
	   for( i=0;i<b[0];i++)  cout<<"0 ";
	   for( i=0;i<b[1];i++)  cout<<"1 ";
	   for( i=0;i<b[2];i++)  cout<<"2 ";
    cout<<endl;
	    
	}
	return 0;
}
