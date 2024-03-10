class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len=0;
        for(ListNode* itr=head;itr!=nullptr;itr=itr->next){
            len++;
        }
        len=len/2;
        for(int i=0;i<len;i++){
            head=head->next;
        }
        return head;
    }
};
