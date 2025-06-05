ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* fast = head;
        ListNode* slow = head;
        for(int i = 0;i<n;i++){
            if(fast->next == NULL){
                return head->next;
            }
            fast=fast->next;   
        }

        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* delNode = slow->next;
        slow->next = slow->next->next;
        delete delNode;
        return head;

        
    }
