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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*temphead=new ListNode();
        ListNode* dummy=temphead;
        ListNode*th1=l1;ListNode*th2=l2;
        int carry=0;
            while(th1!=NULL || th2!=NULL ||carry){
                int sum=0;
                if(th1!=NULL){
                    sum+=th1->val;
                    th1=th1->next;
                }
                if(th2!=NULL){
                    sum+=th2->val;
                    th2=th2->next;
                }

                sum+=carry;
                carry=sum/10;
                ListNode* node=new ListNode(sum%10);
                dummy->next=node;
                dummy=dummy->next;    

            }
            return temphead->next;

    }
};