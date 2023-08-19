string lookAndSaySequence(int n) 
{
    if (n == 1) {
        return "1";
    }
    
    string prev = "1";

    for (int i = 2; i <= n; i++) {
        string cur = "";
        int count = 1;

        for (int j = 1; j < prev.length(); j++) {
            if (prev[j] != prev[j - 1]) {
                cur += to_string(count) + prev[j - 1];
                count = 1;
            } else {
                count++;
            }
        }

        cur += to_string(count) + prev[prev.length() - 1];
        prev = cur;
    }
    
    return prev;
}
