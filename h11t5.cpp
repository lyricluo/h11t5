#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *link;
};
typedef struct Node Node;

struct LinkedList{
	Node *head;
	Node *tail;
};
typedef struct LinkedList LinkedList;


void add(struct Node *head, int value) {
         // if list is NULL, we can do nothing.

         Node *p = new Node;
         //p=new Node;// temporary pointer

         p->data = value;// Set p's data field to the value passed in
                 
        // if (head == NULL){
          //   head=p;
            // p->link=NULL;      
             // Make both head and tail of this list point to p
             // Set p's next field to NULL


         // }else{
          p->link = head;
          head = p;
         // }
          // If Add p at the end of the list
                      // Set p's next field point to the previous head of the list
                      // Set the head of list point to p
                     
}

void deleteNode(struct Node *head, int value){
    Node *before=head;
    Node *discard=head;
    for (;discard!=NULL;){
        if (head->data==value){
            cout<<head<<endl;
            head=head->link;
            cout<<head<<endl;
          //  before=before->link;  
            delete discard;
           // delete before;
            before=head;
            cout<<before<<endl;
            discard=head;
            cout<<discard<<endl;
        }else if(discard->data==value){
            before->link=discard->link;
            delete discard;
            discard=before->link;
        }else{
            before=discard;
            discard=discard->link;
        }
    }
   // Node *here=NULL;
   // for (here=head; here!=NULL; here=here->link){
     //   cout<<(here->data)<<endl;
     //   cout<<here<<endl;
  //  }
}

void print(struct Node *head){
    Node *here=NULL;
    for (here=head;here!=NULL;here=here->link){
        cout<<(here->data)<<endl;
        cout<<&(here->data)<<endl;
    }
}

int main (){
    Node *head=NULL;
    head=new Node;
    //head->data=6;
    //head->link=new Node;
    //head->link->data=6;
    //head->link->link=new Node;
    //head->link->link->data=1;
    //head->link->link->link=new Node;
    //head->link->link->link->data=3;
    //head->link->link->link->link=new Node;
    //head->link->link->link->link->data=7;
    //head->link->link->link->link->link=new Node;
    //head->link->link->link->link->link->data=6;
    //head->link->link->link->link->link->link=NULL;
    int x=6;
    int y=7;
    int z=3;
    int a=5;
    add(head, x);
    add(head,a);
    add(head,z);
    add(head,x);
    add(head,y);
    add(head,x);
    print(head);
    deleteNode (head, x);
    print(head);
    return 0;
}

