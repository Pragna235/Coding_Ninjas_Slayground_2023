string lookAndSaySequence(int n) 
{
    // Write your code here.
    string prev="1";
    string cur=prev;

    for(int i=2;i<=n;i++){
        cur.clear();
        int count=1;
        for(int j=1;j<prev.length();j++){
            if(prev[j]!=prev[j-1]){
                cur.push_back(count+'0');
                cur.push_back(prev[j-1]);

                count=1;
            }
            else{
                count++;
            }
        }
        cur.push_back(count+'0');
        cur.push_back(prev[prev.length()-1]);

        prev=cur;
    }
    return cur;
}
