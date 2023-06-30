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
    //Page 126
public:
    void reverse(ListNode* &head, ListNode* curr, ListNode* prev){
        //base case
        if(curr==NULL){
            head = prev;
            return ;
            
        }
        
        ListNode* f = curr->next;
        reverse(head, f, curr);
        curr->next=prev;
    }
    
    
    ListNode* reverseList(ListNode* head) {
        //Page 126
        /*
        //Approach 1
        
        if(head==NULL || head->next == NULL){
            return head;
        }
        
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *f = NULL;
        
        while(curr!=NULL){
            f = curr->next;
            curr->next=prev;
            prev=curr;
            curr = f;
            
        }
        
        return prev;
        */
        
        //Approach 2
        ListNode *prev = NULL;
        ListNode *curr = head;
        reverse(head, curr, prev);
        return head;
        
    }
};