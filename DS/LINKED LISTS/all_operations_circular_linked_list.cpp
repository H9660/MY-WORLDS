    #include <iostream>
    using namespace std;

    class cllnode{
    public:
        int data;
        cllnode*next;
        cllnode(int data)
        {
            this->data=data;
            this->next=nullptr;
        }
    };


    class clllist{
        public:
        
        cllnode*addnode_beg(cllnode*&head, int data)
        {
            if(head==nullptr)
            {
                cllnode*newnode=new cllnode(data);
                newnode->next=head;
                head->next=head;
                head=newnode;
            }

            else{
                    cllnode*newnode=new cllnode(data);
                    cllnode*temp=head;
                    do{
                        temp=temp->next;
                    }while(temp->next!=head);
                    temp->next=newnode;
                    newnode->next=head;
                    head=newnode;
            }

            return head;
        }

        cllnode*addnode_end(cllnode*&head, int data)
        {
            if(head==nullptr)
            {
                cllnode*newnode=new cllnode(data);  
                head=newnode;
                head->next=newnode;
                return head;

            }
            cllnode*newnode=new cllnode(data);
            cllnode*temp=head;

            while(temp->next!=head)
                temp=temp->next;
            
            newnode->next=head;
            temp->next=newnode;
            return head;
           
        }
        
        cllnode*deletenode_beg(cllnode*head)
        {
            
            if(head==nullptr)
                return head;
            cllnode*temp=head;
            while(temp->next!=head)
                temp=temp->next;
            cllnode*todelete=head;
            head=head->next;
            temp->next=head;

            delete(todelete);
            return head;
        }

        cllnode*deletenode_end(cllnode*head)
        {
            if(head==nullptr)
                return head;
            cllnode*temp=head;
            while(temp->next->next!=head)
                temp=temp->next;
            
            cllnode*lastnode=temp->next;
            temp->next=head;
            delete(lastnode);
            return head;
        }
       

        cllnode*createlist(cllnode*head)
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
        
        void printlist(cllnode*head)
        {
            cllnode*temp=head;
            do
            {
                cout<<temp->data<<" ";  
                temp=temp->next;
            }while(temp!=head);
        }
    };


    int main()
    {
        clllist cll;
        cllnode*head=nullptr;
        head=cll.createlist(head);
        head=cll.addnode_beg(head,0);
        head=cll.addnode_beg(head,-1);
        head=cll.addnode_beg(head,-2);
        head=cll.addnode_beg(head,-3);
        head=cll.addnode_beg(head,-4);
        head=cll.addnode_beg(head,-5);
        head=cll.addnode_end(head,-5);
        
         
        cll.printlist(head);
        return 0;
    }