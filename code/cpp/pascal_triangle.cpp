class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {

        vector<vector<int>> ans;
        vector<int> level;

        for (int line = 1; line <= numRows; line++)
        {
            int C = 1;
            for (int i = 1; i <= line; i++)
            {
                level.push_back(C);
                C = C * (line - i) / i;
            }
            ans.push_back(level);
            level.clear();
        }
        return ans;
    }
};