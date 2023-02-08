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

/*
  // using two pointer :
         ListNode *faster=head;
         ListNode *slower=head;
        while(faster!=NULL&&faster->next!=NULL){
            slower=slower->next;
            faster=faster->next->next;
        }
        return (head=slower);
        
*/
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // make head pointing to mid
        int count=0;
        ListNode* temp=head;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        count/=2;
        while(count--){
            head=head->next;
        }
        return head;
    }
};