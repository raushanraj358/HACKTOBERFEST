// [4,2,0,3,2,5]
// output= 9
#include<bits/stdc++.h>
using namespace std;
int rainwaterTrap(vector<int>& height){
	int n = height.size();
    if(n==0)
        return 0;
    int maxl[n];
    int maxr[n];
    
    maxl[0]=height[0];
    for(int i=1;i<n;i++)
        maxl[i]=max(maxl[i-1],height[i]);
    maxr[n-1]=height[n-1];
    for(int i=n-2;i>=0;i--)
        maxr[i]=max(maxr[i+1],height[i]);
    int ans=0;
    for(int i=0;i<n;i++)
        ans+=(min(maxl[i],maxr[i])-height[i]);
    return ans;
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		cin>>v[i];
		cout<<rainwaterTrap(v)<<endl;
	}
}
