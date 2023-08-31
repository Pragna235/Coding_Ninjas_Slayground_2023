int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int n= arr.size()-1;
    int sum=(n*(n+1))/2;
    int sum2=0;
    for(int i=0;i<arr.size();i++){
        sum2+=arr[i];
    }
    return sum2-sum;
	
}
