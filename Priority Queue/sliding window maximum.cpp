// maximum value in a sliding window of size k.
// [1,3,-1,-3,5,3,6,7] k=3
// output=[3,3,5,5,6,7]
#include<bits/stdc++.h>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<pair<int,int> > q;
        int i=0;
        int j=0;
        vector<int> ans;
        while(j<n){
            q.push({nums[j],j});
            if(j-i+1<k)
                j++;
            else{
                while(!q.empty() and q.top().second<i)
                    q.pop();
                ans.push_back(q.top().first);
                if(q.top().second==i)
                    q.pop();
                i++;
                j++;
            }
        }
        return ans;
}
int main(){
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		cin>>v[i];
		vector<int> ans = maxSlidingWindow(v,k);
		for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
		cout<<"\n";
	}
}
