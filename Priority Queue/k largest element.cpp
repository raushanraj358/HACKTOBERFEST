// Find the kth largest number in a given array
// 5 3 8 4 2, k = 2
//output = 5
#include<bits/stdc++.h>
using namespace std;
int KthSmallest(int a[],int n,int k){
	priority_queue<int,vector<int>,greater<int>> pq; // min heap (It stores largest element at its top.
	for(int i = 0; i < n; i++){
		pq.push(a[i]);
		if(pq.size() > k){
			pq.pop();
		}

	}
	return pq.top();
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cout << KthSmallest(a,n,k) << endl;
	}
}
