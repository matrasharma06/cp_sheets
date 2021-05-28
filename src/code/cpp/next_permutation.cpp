class Solution
{
public:
    int binary_search(vector<int> &s, int l, int r, int key)
    {
        int index = -1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (s[mid] <= key)
                r = mid - 1;
            else
            {
                l = mid + 1;
                if (index == -1 || s[index] >= s[mid])
                    index = mid;
            }
        }
        return index;
    }

    void reverse(vector<int> &s, int l, int r)
    {
        while (l < r)
            swap(s[l++], s[r--]);
    }

    void nextPermutation(vector<int> &s)
    {
        int len = s.size(), i = len - 2;
        while (i >= 0 && s[i] >= s[i + 1])
            --i;
        if (i >= 0)
        {
            int index = binary_search(s, i + 1, len - 1, s[i]);
            swap(s[i], s[index]);
            reverse(s, i + 1, len - 1);
        }

        else
            sort(s.begin(), s.end());
    }
};