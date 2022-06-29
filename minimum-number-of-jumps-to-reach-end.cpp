/* Masthan Swamy */

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int minJumps = getMinimumJumps(nums, 0, 0);
        return minJumps == INT_MAX?-1:minJumps;
    }
    int getMinimumJumps(vector<int>& nums, int i, int jumps){
        if(i == nums.size()-1){
            return jumps;
        }else if(i >= nums.size()){
            return INT_MAX;
        }

        int minJumps = INT_MAX;
        for(int x=i+1; x<=(i+nums[i]) && x<nums.size(); x++){
            minJumps = min(minJumps, getMinimumJumps(nums, x, jumps+1));
        }

        return minJumps;
    }
};

int main(){

	int t;
	cin>>t;

	vector<int> nums;
	Solution s;

	while(t-- > 0){
		int n;
		cin>>n;
		
		for(int i=0; i<n; i++){
			int temp;
			cin>>temp;
			nums.push_back(temp);
		}

		cout<<s.jump(nums)<<endl;

		nums.clear();
	}

    return 0;
}