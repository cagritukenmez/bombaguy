class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        char kalan=0;
        char toplam=0;
        if(l1->val+l2->val >= 10) kalan=1;  
        l2->val = (l1->val+l2->val)%10;
        ListNode* itr1 = l1->next;
        ListNode* itr2 = l2->next;
        ListNode* prev=l2;
        while(!(itr1 == nullptr || itr2 == nullptr)){
            toplam = itr1->val + itr2->val + kalan;
            if(toplam >= 10) kalan=1;
            else kalan = 0;
            itr2->val = toplam%10;
            itr1= itr1->next;
            prev=itr2;
            itr2=itr2->next;
        }
        if(itr1 != nullptr){//eğer 1. liste bitmediyse...
            prev->next=itr1;
            while(itr1 != nullptr){
                toplam = itr1->val+kalan;
                if(toplam >= 10) kalan=1;
                else {
                    kalan=0;
                    }
                itr1->val = toplam%10;
                prev=itr1;
                itr1=itr1->next;
            }
        }
        else if(itr2 != nullptr){//eğer 2.liste bitmediyse...
            while(itr2 != nullptr){
                toplam = itr2->val + kalan;
                if(toplam >= 10) kalan=1;
                else {
                    kalan = 0;
                }
                itr2->val = toplam%10;
                prev=itr2;
                itr2=itr2->next;
            }
        }
        if(kalan == 1){
            prev->next = new ListNode(1);
        }
        return l2;
    }
};
