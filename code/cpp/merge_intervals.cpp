class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &vec)
    {
        vector<vector<int>> ans;
        int largerOne;
        sort(vec.begin(), vec.end());
        for (int i = 1; i < vec.size(); i++)
        {
            if (vec[i][0] <= vec[i - 1][1])
            {
                vec[i][0] = min(vec[i - 1][0], min(vec[i][0], min(vec[i - 1][1], vec[i][1])));
                vec[i][1] = max(vec[i - 1][0], max(vec[i][0], max(vec[i - 1][1], vec[i][1])));
                vec[i - 1].clear();
            }
        }
        for (int i = 0; i < vec.size(); i++)
        {
            if (vec[i].size())
            {
                ans.push_back(vec[i]);
            }
        }

        return ans;
    }
};