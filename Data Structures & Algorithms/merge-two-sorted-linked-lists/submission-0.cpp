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
    void insert_start(ListNode *&h,int n) {
    ListNode * temp = new ListNode();
    temp -> val = n;
    temp -> next = h;
    h = temp;
    }
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            vector <int> v;
            ListNode * temp = list1;
            while(temp!=NULL){
                v.push_back(temp->val);
                temp = temp->next;
            }
            temp = list2;
            while(temp!=NULL){
                v.push_back(temp->val);
                temp = temp->next;
            }
            sort(v.begin(),v.end());
            ListNode *h = NULL;
            for(int i=v.size()-1;i>=0;i--){
                insert_start(h,v[i]);
            }
            return h;
        }
    };
