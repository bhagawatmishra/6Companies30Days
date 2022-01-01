// https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/
// TC: O(N*KlogK)
// SC: O(N)
class Solution
{
public:
    vector<vector<string>> Anagrams(vector<string> &string_list)
    {
        unordered_map<string, vector<string>> ump;
        int n = string_list.size();
        string temp;

        for (int i = 0; i < n; i++)
        {
            temp = string_list[i];
            sort(string_list[i].begin(), string_list[i].end());
            ump[string_list[i]].push_back(temp);
        }

        vector<vector<string>> result;
        for (auto itr = ump.begin(); itr != ump.end(); itr++)
        {
            result.push_back(itr->second);
        }

        return result;
    }
};