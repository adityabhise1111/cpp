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
            ListNode* prev = NULL;
            ListNode* curr= head;
            ListNode* frwd = NULL;
            while(curr != NULL){
                frwd = curr->next;
                curr->next = prev;
                prev = curr;
                curr = frwd;
            }
            head = prev;
            return head;
            
        }
    };


    //same with recursive call 
    
class Solution {
    public:
    
        ListNode* reverseList(ListNode* head,ListNode* prev=NULL,ListNode* frwd = NULL) {
            
            ListNode* curr= head;       
            if(curr != NULL){
                frwd = curr->next;
                curr->next = prev;
                prev = curr;
                curr = frwd;
                return reverseList(curr,prev,frwd);
            }
            
            return prev;
            
        }
    };