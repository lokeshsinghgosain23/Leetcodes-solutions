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
        int cnt=0;
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode*temp=head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        temp=head;
        int nthnode=(len-n);
        if(nthnode==0){
            head=head->next;
            delete(temp);
            return head;
        }
        ListNode*prev=head;
        int x=nthnode;
        int p=nthnode;
        while(x){
            temp=temp->next;
            x--;

        }
        while(p-1){
            prev=prev->next;
            p--;

        }
        prev->next=temp->next;
        delete(temp);




        return head;
        



    }
};