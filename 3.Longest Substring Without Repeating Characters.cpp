class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right = 0;
        int n = s.length();
        if(n == 1) return 1;
        int len =0;
        unordered_map<char,int> map;
        while(right < n){
            if(map[s[right]] != 0) left = max(map[s[right]],left);
            map[s[right]]=right+1;
            len = max(len,right-left+1);
            right++;
        }
        return len;
    }
};
