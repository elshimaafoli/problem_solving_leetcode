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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL) return head=NULL;
        ListNode* pref=NULL;
        ListNode* faster=head;
        ListNode*slower=head;
        while(faster!=NULL&&faster->next!=NULL){
            pref=slower;
            slower=slower->next;
            faster=faster->next->next;
        }
        pref->next=slower->next;
        delete slower;
        return head;
    }
};