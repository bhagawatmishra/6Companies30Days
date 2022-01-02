// https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/#
// TC: O(N)   SC: O(N)
class Solution
{
public:
    // #define ull unsigned long long
    /* Function to get the nth ugly number*/
    ull getNthUglyNo(int n)
    {
        // code here
        ull ugly[n];
        ull i2 = 0, i3 = 0, i5 = 0;
        ull m2 = 2;
        ull m3 = 3;
        ull m5 = 5;
        ull next = 1;
        ugly[0] = 1;
        for (int i = 1; i < n; i++)
        {
            next = min(m2, min(m3, m5));
            ugly[i] = next;
            if (next == m2)
            {
                i2 = i2 + 1;
                m2 = ugly[i2] * 2;
            }
            if (next == m3)
            {
                i3 = i3 + 1;
                m3 = ugly[i3] * 3;
            }
            if (next == m5)
            {
                i5 = i5 + 1;
                m5 = ugly[i5] * 5;
            }
        }
        return next;
    }
};