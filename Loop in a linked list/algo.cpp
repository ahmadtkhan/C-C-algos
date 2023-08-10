bool hasCycle(ListNode *head) {
    if(head == NULL){
        return false;
    }
    ListNode *fast = head->next;
    ListNode *slow = head;
    while(fast != NULL && fast->next != NULL && slow != NULL){
        if(fast == slow){
            return true;
        }
        fast = fast->next->next;
        slow = slow->next;
    }
    return false;        
     
}
