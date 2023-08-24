
void printPattern(int n) {
           
        for(int row = 1; row <= n; row++)
        {
           
            int spaces = 0;
            while(spaces < n - row) {
                cout << " ";
                spaces += 1;
            }
            
            
            for(int col = 1; col <= 2 * row - 1; col++)
            {
                
                cout << "*";
            }
            cout << endl;
        }
}
