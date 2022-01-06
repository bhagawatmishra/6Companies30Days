// https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1#
class Solution
{
public:
    string printMinNumberForPattern(string s)
    {
        stack<int> st;
        string res;
        int num = 1;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (ch == 'D')
            {
                st.push(num++);
            }
            else
            {
                st.push(num++);
                while (st.size() > 0)
                {
                    cout << st.top();
                    st.pop();
                }
            }
        }
        st.push(num);
        while (st.size() > 0)
        {
            cout << st.top();
            st.pop();
        }
        return res;
    }
};