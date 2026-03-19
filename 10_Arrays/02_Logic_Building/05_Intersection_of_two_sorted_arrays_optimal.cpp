#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersectionArray(vector<int> &nums1, vector<int> &nums2)
    {

        vector<int> intersection;

        int i = 0, j = 0;

        int n = nums1.size();
        int m = nums2.size();

        while (i < n && j < m)
        {
            if (nums1[i] < nums2[j])
            {
                i++;
            }
            else if (nums2[j] < nums1[i])
            {
                j++;
            }
            // nums1[i] == nums2[j]
            else
            {
                intersection.push_back(nums1[i]);
                i++;
                j++;
            }
        }

        return intersection;
    }
};

int main()
{
    vector<int> nums1 = {1, 2, 3, 3, 4, 5, 6, 7};
    vector<int> nums2 = {3, 3, 4, 4, 5, 8};

    Solution sol;

    vector<int> ans = sol.intersectionArray(nums1, nums2);

    cout << "Intersection of nums1 and nums2 is:" << endl;
    for (int it : ans)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
