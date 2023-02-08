/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// using floyed's cycle finding
/*
bool hasCycle(ListNode *head) {
        ListNode *slower=head;
        ListNode *faster=head;
        while(slower&&faster&&faster->next){
            slower=slower->next;
            faster=faster->next->next;
            if(slower==faster)
                return true;
        }
        return false;
    }
 */

// using hash table:
 /*bool hasCycle(ListNode *head) {
       unordered_set<ListNode*> hash;
        while(head!=NULL){
            
            if(hash.find(head)!=hash.end())
                return true;
            hash.insert(head);
            head=head->next;
        }
        return false;
    }
    */

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slower=head;
        ListNode *faster=head;
        while(slower&&faster&&faster->next){
            slower=slower->next;
            faster=faster->next->next;
            if(slower==faster)
                return true;
        }
        return false;
    }
};