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
    ListNode* middleNode(ListNode* head) {
        ListNode*temp=head;
        int cnt=0;
        int num=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        if(cnt%2!=0){
            //odds hai 
            num=cnt/2;
            for(int i=0;i<num;i++){
                head=head->next;
            }
        }
        if(cnt%2==0){
            //even num hai then 
            num=1+(cnt/2);
        
            for(int i=1;i<num;i++){
                head=head->next;
            }
        }
        return head;
    }
};