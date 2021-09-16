public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any node
        if(head==NULL || head->next==NULL)
        return;
        Node *slow=head,*fast=head;
        while(fast!=NULL && fast->next!=NULL ){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                break;
        }
        if(slow==head){
            while(slow->next!=head)
                slow=slow->next;
            slow->next = NULL;
        }
        if(slow!=fast)
            return;
        slow=head;
        while(slow->next!=fast->next){
            slow=slow->next;
            fast=fast->next;
        }fast->next=NULL;
    }
