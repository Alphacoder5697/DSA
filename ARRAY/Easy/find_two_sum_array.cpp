#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{

    vector<int> num2(nums);
    std::sort(num2.begin(), num2.end(), [](int a, int b)
              { return a < b; });
    int l = 0;
    int r = num2.size() - 1;

    vector<int> result;
    while (l < r)
    {
        if (target == (num2[l] + num2[r]))
            break;
        else if (target < (num2[l] + num2[r]))
        {
            r--;
        }
        else

            l++;
    }

    auto itr = std::find(nums.begin(), nums.end(), num2[l]);
    result.emplace_back(std::distance(nums.begin(), itr));

    if (num2[l] == num2[r])
    {
        itr = std::find(itr + 1, nums.end(), num2[r]);
        result.emplace_back(std::distance(nums.begin(), itr));
    }
    else
    {
        itr = std::find(nums.begin(), nums.end(), num2[r]);
        result.emplace_back(std::distance(nums.begin(), itr));
    }

    return result;
}