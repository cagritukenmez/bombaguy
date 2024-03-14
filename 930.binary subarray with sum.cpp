class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> count;
        count[0] = 1;
        int total_sub=0;
        int currSum=0;
        for(auto num:nums){
            currSum+=num;
            if(count[currSum-goal] != count.end()){
                total_sub+=count[curr_Sum];
            }
            count[curr_Sum]++;
        }
        return total_sub;
    }
};
