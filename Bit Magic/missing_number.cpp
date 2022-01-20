class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        sort(array.begin(), array.end());
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (array[i] - temp != 1)
                return i+1;
            temp++;
        }
    }
};
