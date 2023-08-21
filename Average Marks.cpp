

#include <utility>

pair<char, int> averageMarks(char firstLetterOfName, int m1, int m2, int m3) {
    
    int total = m1 + m2 + m3;
   
    int average = total / 3;
    
    pair<char, int> ans;
    ans.first = firstLetterOfName;
    ans.second = average;
    return ans;
    
}
