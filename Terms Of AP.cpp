#include <bits/stdc++.h>
#include <vector>

vector < int > termsOfAP(int x) {
    
    
    vector < int > ans;
    int got = 0;
    int curr = 5;
    while (got != x) {
        if (curr % 4 != 0) {
            ans.push_back(curr);
            got++;
        }
        curr += 3;
    }
    return ans;
}
