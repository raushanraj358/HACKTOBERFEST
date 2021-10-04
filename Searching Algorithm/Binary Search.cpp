// Search an element in a given array
// a[5] = 6 8 12 14 16, key = 12
// output = 2(which is nothing but the index of 12)

#include<iostream>
using namespace std;
int Search(int a[],int n,int x){
	int start = 0;
	int end = n-1;
	while(start <= end){
		int mid = start + (end - start)/2;
		if(a[mid] == x){
			return mid;
		}
	 else if(a[mid] > x){
			end = mid -1;
		}
		else{
			start = mid+1;
		}
	}
	return -1;

}
int main(){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int x;
		cin >> x;
		cout << Search(a,n,x) << endl;
	
}
