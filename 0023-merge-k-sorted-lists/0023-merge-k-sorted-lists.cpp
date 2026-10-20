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
    // ListNode* merge(ListNode* list1,ListNode* list2){
    //     ListNode* dummyNode = new ListNode(-1);
    //     ListNode* res = dummyNode;
    //     while(list1 != NULL && list2 != NULL){
    //         if(list1->val < list2->val){
    //             res->next = list1;
    //             res = list1;
    //             list1 = list1->next;
    //         }
    //         else{
    //             res->next = list2;
    //             res = list2;
    //             list2 = list2->next;
    //         }
    //         res->next = NULL;
    //     }
    //     if(list1) res->next = list;
    //     else res->next = list2;
    //     if(dummyNode->next) dummyNode->next->next = NULL;
    //     return dummyNode->next;
    // }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // if(head == NULL || head->next == NULL) return head;
        // ListNode* mergedHead = mergeKLists(head->next);
        // head = merge(head,mergedHead);
        // return head;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(ListNode* head : lists){
            while(head != NULL){
                pq.push(head->val);
                head = head->next;
            }
        }
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        while(!pq.empty()){
            tail->next = new ListNode(pq.top());
            pq.pop();
            tail = tail->next;
        }
        return dummy->next;
    }
};