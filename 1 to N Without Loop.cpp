vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> result;
    if(x>0){
        printNos(x-1);
        cout<<x<<" ";
    }
    return result;
}
