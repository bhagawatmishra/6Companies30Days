// https://practice.geeksforgeeks.org/problems/run-length-encoding/1/#
// TC: O(n)  SC: O(1)

string encode(string src)
{
    string res;
    for (int i = 0; i < src.size(); i++)
    {
        res += src[i];
        int cnt = 1;
        while (i + 1 < src.size() and src[i] == src[i + 1])
        {
            cnt++;
            i++;
        }
        res += to_string(cnt);
    }
    return res;
}