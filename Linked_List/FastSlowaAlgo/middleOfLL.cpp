#include <bits/stdc++.h>
#include<vector>
using namespace std;

// Definition of a linked list node
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* MiddleOfLL(ListNode* head){
    if(head == nullptr) return nullptr;

    ListNode* slow = head;
    ListNode* fast = head;

    while(head != nullptr && head->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}