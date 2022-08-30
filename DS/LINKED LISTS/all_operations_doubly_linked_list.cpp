#include <iostream>
using namespace std;

class dllnode{
public:
    int data;
    dllnode*next;
    dllnode*prev;
    dllnode(int data)
    {
        this-> data=data;
        this->next=nullptr;
        this->prev=nullptr;
    }
};


class dlllist{
    public:
    
    dllnode*addnode_beg(dllnode*&head, int data)
    {
        if(head==nullptr)
        {
            dllnode*newnode=new dllnode(data);
            head->prev=newnode;
            newnode->next=head;
            head=newnode;
        }

        else{
                dllnode*newnode=new dllnode(data);
                newnode->next=head;
                head->prev=newnode;
                head=newnode;
        }

        return head;
    }

    dllnode*addnode_end(dllnode*&head, int data)
    {
        if(head==nullptr)
        {
            dllnode*newnode=new dllnode(data);  
            head=newnode;
            return head;

        }
        dllnode*newnode=new dllnode(data);
        dllnode*temp=head;

        while(temp->next!=nullptr)
            temp=temp->next;

        temp->next=newnode;
        newnode->prev=temp;
        newnode->next=nullptr;
        return head;
       
    }
    
    dllnode*deletenode_beg(dllnode*head)
    {
        if(head==nullptr)
            return head;
        dllnode*temp=head;
        head=head->next;
        head->prev=nullptr;
        delete(temp);
        return head;
    }

    dllnode*deletenode_end(dllnode*head)
    {

        dllnode*temp=head;
        while(temp->next->next!=nullptr)
            temp=temp->next;
        
        dllnode*lastnode=temp->next;
        temp->next=nullptr;
        delete(lastnode);
        return head;
    }
   

    dllnode*createlist(dllnode*head)
    {
        cout<<"ENTER THE NUMBER OF NODES IN THE LIST"<<endl;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int data;
            cin>>data;
            head=addnode_end(head, data);
        }

        return head;
    }
    
    void printlist(dllnode*head)
    {
        dllnode*temp=head;
        while(temp!=nullptr)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};


int main()
{
    dlllist dll;
    dllnode*head=nullptr;
    head=dll.createlist(head);
    head=dll.addnode_beg(head,0);
    head=dll.addnode_beg(head,-1);
    head=dll.addnode_beg(head,-2);
    head=dll.addnode_beg(head,-3);
    head=dll.addnode_beg(head,-4);
    head=dll.addnode_beg(head,-5);
    head=dll.addnode_end(head,-5);
    
    
    dll.printlist(head);
    return 0;
}