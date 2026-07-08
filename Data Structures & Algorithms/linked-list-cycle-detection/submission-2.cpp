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
    bool hasCycle(ListNode* head) {
        int n=0;
        unordered_set <ListNode*> v;
        ListNode * temp = head;
        while(n==v.size()){
            if(temp==NULL){
                return false;
            }
            temp = temp->next;
            v.insert(temp); 
            n++;
        }
        return true;
    }
};
