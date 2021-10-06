#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int a[n];
	int b[m];
	for(int i = 0; i< n; i++){
		cin >>a[i];
	}
	for(int j = 0; j < m; j++){
		cin >> b[j];
	}
	int gap = (m+n)/2 + (m+n)%2;
	//cout << gap;
	for(int i = 0; i < n; i++){
		for(int j =0 ; j < m; j++){
			if(a[i] < b[j]){
				swap(a[i],b[j]);
				gap++;
			}

		}
	}
	sort(a,a+n);
	sort(b,b+m);
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	for(int j =0; j < m; j++){
		cout << b[j] << " ";
	}

}
