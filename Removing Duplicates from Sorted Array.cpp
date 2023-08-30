

int removeDuplicates(vector<int> &arr, int n) {
   
    int i = 0;

    
    for (int j = 1; j < n; j++) {
        
        if (arr[j] != arr[j-1]) {
            arr[i++] = arr[j];
        }
    }
    
    return i + 1;
}
