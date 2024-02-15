#include "llrec.h"
//*********************************************
// Provide your implementation of llpivot below
//*********************************************


void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot){
    if(head==nullptr){
        smaller=nullptr;
        larger=nullptr;
        return;
    }
    Node* temp=head;
    if(head->val<=pivot){
        head = head->next;
        temp->next=nullptr;
        llpivot(head, temp->next, larger, pivot);
        smaller=temp;
    }else{
        head = head->next;
        temp->next=nullptr;
        llpivot(head, smaller, temp->next, pivot);
        larger=temp;
    }
}