class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr) return head;
        int len=1;
        ListNode* tail;
        for(ListNode* itr=head;itr->next !=nullptr;itr=itr->next){
            tail = itr->next;
            len++;
        }
        k=k%(len);
        if(k==0 || len == 1) return head;
        tail->next = head;
        ListNode* newTail=head;
        for(int i=1;i<len-k;i++){
            newTail=newTail->next;
        }
        head = newTail->next;
        newTail->next = nullptr;
        return head;
    }
};
