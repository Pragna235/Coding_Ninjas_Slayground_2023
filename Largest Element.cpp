#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int large=INT_MIN;
    for(int i=0;i<n;i++){
        large=max(large,arr[i]);
    }
    return large;
}
