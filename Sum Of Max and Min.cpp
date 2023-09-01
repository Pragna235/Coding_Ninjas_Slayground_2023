#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
	int maxi=INT_MIN;
	int mini=INT_MAX;
	for(int i=0;i<n;i++){
		maxi=max(maxi,arr[i]);
		mini=min(mini,arr[i]);
	}
	return maxi+mini;
}
