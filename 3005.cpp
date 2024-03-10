class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<char,char> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        char max=1;
        for(auto it:m){
            if(it.second >max)max=it.second;
        }
        signed char freq=0;
        for(auto it:m){
            if(it.second == max) freq+=max;
        }
        return freq;
    }
};
