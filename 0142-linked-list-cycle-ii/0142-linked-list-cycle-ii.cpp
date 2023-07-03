/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    //Page 131
    ListNode *detectInter(ListNode *head){
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next;
            //if(fast->next!=NULL)
                fast=fast->next;
            
            
            if(slow==fast){
                return slow;
            }
        }
        return NULL;
    }
    
    ListNode *findStart(ListNode *head, ListNode* slow){
        ListNode* temp2 = head;
        while(temp2!=slow){
            slow=slow->next;
            temp2=temp2->next;
        }
        return slow;
    }
    
    ListNode *detectCycle(ListNode *head) {
        
        if(head == NULL)
            return head;
        
        ListNode* temp1 = detectInter(head);
        if(temp1==NULL)
            return NULL;
        
        ListNode* ans = findStart(head, temp1);
        return ans;
    }
};