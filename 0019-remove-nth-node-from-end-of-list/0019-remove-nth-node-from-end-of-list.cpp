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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * dummy=head;
        int len=0;
        if(head==NULL)return NULL;
         while(dummy!=NULL){
            len++;
            dummy=dummy->next;
         }
         int remove=len-n;
         if(remove==0){
            ListNode*t=head;
            head=head->next;
            delete(t);
         }

         ListNode* temp=head;
         while(temp!=NULL){
            remove--;
            if(remove==0){
                ListNode* t=temp->next;
                temp->next=t->next;
                delete(t);
                return head;
            }
            temp=temp->next;
         }
         return head;
    }
};