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
    ListNode* reverseList(ListNode* head) {
    ListNode * l=head;
    if(head == NULL){
        return head;
    }
    if((l->next)==NULL){
        return l;
    }
    ListNode * m= l->next;
    (head->next)=NULL;
    if((m->next)==NULL){
        m->next = l;
        l->next = NULL;
        return m;
    }
    ListNode * r =m ->next;
    while ((r->next)!=NULL) {
        m->next =l;
        l=m;
        m=r;
        r=r->next;
    }
    m-> next =l;
    l=m;
    m=r;
    r->next=l;
    return r;
    
}
    };
