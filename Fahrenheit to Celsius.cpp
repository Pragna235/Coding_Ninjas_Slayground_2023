
vector<vector<int>> fahrenheitToCelsius(int s, int e, int w)
{
   
    vector<vector<int>> conversion;
    vector<int> temp;
    
    for( int i = s; i <= e; i = i + w )
    {
    	temp.push_back( i );
    	temp.push_back(( i - 32 ) * 5 / 9);
        conversion.push_back(temp);
    	temp.clear();
    }
    
    return conversion;
}
