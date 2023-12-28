class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int kalan=0;
        if(l1->val+l2->val >= 10) kalan=1;
        ListNode* l3 = new ListNode((l1->val+l2->val)%10);
        ListNode* itr1 = l1->next;
        ListNode* itr2 = l2->next;
        while(true){//bu işlemden sonra liste terslenmelidir.
            if(itr1 == nullptr || itr2 == nullptr)break;
            unsigned toplam = itr1->val + itr2->val + kalan;
            if(toplam >= 10) kalan=1;
            else kalan = 0;
            l3 = new ListNode(toplam%10,l3);
            itr1= itr1->next;
            itr2=itr2->next;
        }
        if(itr1 == nullptr){
            while(itr2 != nullptr){
            int toplam =itr2->val + kalan;
            if(toplam >= 10) kalan=1;
            else kalan = 0;
            l3 = new ListNode(toplam%10,l3);
            itr2=itr2->next;
            }
        }
        else{
            while(itr1 !=nullptr){
            int toplam =itr1->val + kalan;
            if(toplam >= 10) kalan=1;
            else kalan = 0;
            l3 = new ListNode(toplam%10,l3);
            itr1=itr1->next;
            }
        }
        if(kalan == 1){
            l3 = new ListNode(1,l3);
        }
        return reverse(l3);
    }
    ListNode* reverse(ListNode* l){
        ListNode* prev= nullptr;
        ListNode* cur = l;
        ListNode* next = nullptr;
        while(cur != nullptr){
            next = cur->next;
            cur->next = prev;
            prev=cur;
            cur=next;
        }
        l = prev;
        return l;
    }
};
