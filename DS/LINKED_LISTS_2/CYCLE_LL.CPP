// #include <iostream>
// #include <string.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     bool visited = false;
//     node *next;

// };

// node *head = NULL;

// void insert(int new_data)
// {
//     node *new_node = new node();
//     new_node->data = new_data;
//     new_node->next = head;
//     head = new_node;
// }

// bool has_cycle(node *head)
// {
//     node *prev_addr = head;
//     node *next_addr = prev_addr->next;

//     while (next_addr->next!= NULL)
//     {
//         if (next_addr->next->visited == true)
//             return true;

//         prev_addr->visited = true;
//         next_addr->visited = true;
//         prev_addr = next_addr;
//         next_addr = next_addr->next;
//     }

//     return false;
// }
// int main()
// {

//     node *n1 = new node();
//     head=n1;

//     node *n2 = new node();
//     n1->next = n2;

//     node *n3 = new node();
//     n2->next = n3;

//     node *n4 = new node();
//     n3->next = n4;

//     node *n5 = new node();
//     n4->next = n5;

//     node *n6 = new node();
//     n5->next = n6;

//     n6->next=NULL;
    
//     cout << has_cycle(head);
    
//     return 0;
// }



struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        ListNode* walker = head;
        ListNode* runner = head;
        while(runner->next != NULL && walker->next != NULL){
            walker = walker->next;
            runner = runner->next->next;
            if(walker == runner) return true;
        }
        return false;
    }
};