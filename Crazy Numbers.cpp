

vector < vector < int > > numberPattern(int n) {

  
  vector < vector < int > > ans(n, vector < int > (n, -1));

  int k = 1;

 
  for (int i = 0; i < n; i++) {
    for (int j = n - i - 1; j < n; j++) {

     
      if (k > 9) {
        k = 1;
      }
      
      ans[i][j] = k;
   
      k++;
    }
  }
  
  return ans;
}
