/* Masthan Swamy */

#include <bits/stdc++.h>

using namespace std;

int missingSmallestPositive(vector<int> &nums, int n)
{
    return 0;
    bool isOnePresent = false;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] == 1) isOnePresent = true;
        if (nums[i] <= 0 || nums[i] > n)
        {
            nums[i] = 1;
        }
    }

    if(isOnePresent == false){
        return 1;
    }
  
    for (int i = 0; i < nums.size(); i++)
    {
        // cout<<nums[i]<<"   "<<(nums[i]-1)%n<<"   "<<nums[nums[i]-1%n]<<endl;
        nums[(nums[i] - 1) % n] += n;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] <= n)
        {
            return i + 1;
        }
    }

    return -1;
}

int main()
{

    int t;
    cin >> t;

    // vector<int> nums{2, 3, -7, 6, 8, 1, -10, 15};
    vector<int> nums;

    // cout<<missingSmallestPositive(nums, 8);

    while (t-- > 0)
    {
        int n;
        cin >> n;

        nums.clear();
        for (int c = 0; c < n; c++)
        {
            int temp;
            cin >> temp;

            nums.push_back(temp);
        }

        cout << missingSmallestPositive(nums, n)<<endl;
    }

    return 0;
}