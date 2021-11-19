#include<bits/stdc++.h>
using namespace std;
// optimized solution 0(n)
int main(){
	vector<int> v ={12,78,12,45,46};
	int index = 0;
	for(int i = 0; i < v.size();i++){
		if(v[i] > v[index]){
			index = i;
		}
	}
	cout<<index<<endl;
	return 0;
}
// unoptimized solution o(n2)
int getlargest(int arr[], int n){
	for(int i = 0 ; i<n; i++){
		bool flag = true;
		for(int j = 0; j<n;j++){
			if(arr[j]>arr[i]){
				flag = false;
				break;
			}
		}
		if(flag == true)
			return i;
	}
	return -1;
}