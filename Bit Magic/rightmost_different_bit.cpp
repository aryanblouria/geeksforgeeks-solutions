class Solution
{
    public:
    int posOfRightMostDiffBit(int m, int n)
    {
        int count = 1;
        if (m == n)
            return -1;
        while ((m % 2 == 0 && n % 2 == 0) || (m % 2 != 0 && n % 2 != 0))
        {
            m/=2;
            n/=2;
            count++;
        }
        return count;
    }
};
