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
    //Page 138
    bool checkPalindrome(vector<int> arr){
        int end = arr.size()-1;
        int s  = 0;
        while(s<=end){
            if(arr[s]==arr[end]){
                s++;
                end--;
            }else{
                return false;
            }
        }
        return true;
    }
    
    
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode* temp  = head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        return checkPalindrome(arr);
    }
};