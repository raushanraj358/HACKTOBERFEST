// return indices of elements which add up to target.
// [2,7,11,15] target = 9 
// output= [0,1]
#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& v, int target){
	int n = v.size();
    vector<pair<int,int> > nums;
    for(int i=0;i<n;i++)
        nums.push_back({v[i],i});
    sort(nums.begin(),nums.end());
    int i=0;
    int j=n-1;
    vector<int> ans;
    while(i<j){
        if(nums[i].first+nums[j].first==target){
            ans.push_back(nums[i].second);
            ans.push_back(nums[j].second);
            break;
        }
        else if(nums[i].first+nums[j].first<target)
            i++;
        else
            j--;
    }
    return ans;
}
int main(){
	int t,n,target;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> v(n);
		vector<int> ans;
		for(int i=0;i<n;i++)
		cin>>v[i];
		cin>>target;
		ans=twoSum(v,target);
		if(ans.size()==0)
		cout<<"-1";
		else{
			cout<<ans[0]<<" "<<ans[1]<<endl;
		}
		cout<<"\n";
	}
}
