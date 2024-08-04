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
    bool isPalindrome(ListNode* head) {
        ListNode* th=head;
        vector<int>temp;
        while(th!=NULL){
            temp.push_back(th->val);
            th=th->next;
        }

        int start=0;
        int end=temp.size()-1;
        while(start<=end){
            if(temp[start++]!=temp[end--])return false;
        }
        return true;

    }
};