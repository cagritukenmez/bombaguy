/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* itr = head;
        while(itr != nullptr && itr->next != nullptr){
            if(itr->val == itr->next->val){
                ListNode* temp;
                while( itr->next != nullptr && itr->val == itr->next->val){
                    temp=itr->next;
                    itr->next = temp->next;
                    delete temp;
                }
            }else{
                itr=itr->next;
            }
        }
        return head;
    }
};
