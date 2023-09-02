#include<algorithm>
bool checkDiff(int *arr, int N, int K) {
   
    sort(arr, arr + N);

  
    int left = 0;
    int right = 1;

    while (right < N) {
        int diff = arr[right] - arr[left];
        if (diff == K) {
            return true;
        } else if (diff < K) {
           
            right++;
        } else {
            
            left++;
           
            if (left == right) {
                right++;
            }
        }
    }

    return false;
}
