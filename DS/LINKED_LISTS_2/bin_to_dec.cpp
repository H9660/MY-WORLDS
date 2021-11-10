// convrt binary to decimal!
// uses the simple division rule:
//   dividend=divisor*quotient+ remainder!
// 8.2 mb , 0 ms time!= NULL
// 100% correct
#include <iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(){

    }
    ListNode(int val) : val(val){};
};

ListNode *reverse(ListNode *head) // prev-> 9-> 10 ->11 ->12->13->67
{
    ListNode *prev;
    ListNode *n;
    ListNode *curr;
    prev = NULL;
    curr = head;
    n = curr;
    while (n != NULL)
    {
        n = n->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }
    head = prev;
    return head;
}

class Solution
{
public:
    int getDecimalValue(ListNode *head)
    {
        int ans = 0;
        ListNode *temp = head;

        while (temp != NULL)
        {
            ans *= 2;
            ans += temp->val;
            temp = temp->next;
        }

        return ans;
    }

    ListNode *createList(ListNode **head)
    {
       

        int i = 3;
        int bin;
        while (i--)
        {
            cin >> bin;
            ListNode *node = new ListNode(bin);
            node->next = *head;
            *head = node;
        }

        *head = reverse(*head);
        return *head;
    }
};

int main()
{
    Solution s;
    // cout<<s.getDecimalValue(100);
    ListNode *head=NULL;
    head = s.createList(&head);
    cout << s.getDecimalValue(head);
    return 0;
}
