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
    ListNode* middleNode(ListNode* head) {
        // make head pointing to mid
        // using two pointer :
         ListNode *faster=head;
         ListNode *slower=head;
        while(faster!=NULL&&faster->next!=NULL){
            slower=slower->next;
            faster=faster->next->next;
        }
        return (head=slower);
        
    }
};