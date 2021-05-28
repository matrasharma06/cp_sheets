class Solution
{
public:
    void nullify(vector<vector<int>> &matrix, int m, int n, int r, int c)
    {
        for (int i = 0; i < m; i++)
        {
            matrix[i][c] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            matrix[r][i] = 0;
        }
    }
    void setZeroes(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<pair<int, int>> indexes;
        pair<int, int> index;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    index.first = i;
                    index.second = j;
                    indexes.push_back(index);
                }
            }
        }

        for (auto e : indexes)
        {
            nullify(matrix, m, n, e.first, e.second);
        }
    }
};