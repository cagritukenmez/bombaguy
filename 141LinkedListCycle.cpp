//
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,int> mapp;
        for(ListNode* itr = head;itr!=nullptr;itr=itr->next){
            mapp[itr]++;
            if(mapp[itr] == 2) return true;
        }
        return false;
    }
};
