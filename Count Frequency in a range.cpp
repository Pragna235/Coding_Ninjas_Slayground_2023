vector<int> countFrequency(int n, int x, vector<int> &arr)
{
    vector<int> freq(n, 0);

    for (int num : arr)
    {
        if (num >= 1 && num <= x)
        {
            freq[num - 1]++;
        }
    }
    return freq;
}
