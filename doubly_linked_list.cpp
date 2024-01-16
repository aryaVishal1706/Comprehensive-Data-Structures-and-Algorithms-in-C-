/*
     here the structure of node is
          _________________________________________
          |    Previous  |    Data |    Next      |
          |______________|_________|______________|


          NULL <==> 1 <==> 2 <==> 3 <==> 4 <==> 5 <==> NULL
          prev     Head  

*/
#include<iostream>
using namespace std;

class node{
     public:
      int data;
      node* next;
      node* prev;
      
      node(int val){
          data = val;
          next =NULL;
          prev = NULL;          
      }
};

void insertTail(node* &head, int val){
     node* newnode = new node(val);
     if(head == NULL){
          head = newnode;
          return;
     }
     node* temp = head;
     while(temp->next != NULL){
          temp = temp->next;
     }
     temp -> next = newnode;
     newnode -> prev  = temp;
     // cout<< "HELLO";
}

void display(node* head){
     cout<<"NULL";
     node* temp = head;
     while(temp != NULL){
          cout<< " <==> " << temp-> data;
          temp = temp -> next;
     }
     cout<<" <==> NULL"<<endl;
}

//insert in head 
void insertAtHead(node* & head, int val){
     node * newnode = new node(val);

     newnode-> next = head;
     if(head != NULL){
        head-> prev = newnode;
        head = newnode;  
     }
}

// deletion in linked list
void deletion(node* &head , int val){
     /* If the list is empty */
     node* temp = head;
     while(temp != NULL){
          if(temp -> data ==val){
               break;
          }
          temp = temp -> next;
     }
     if(temp ==NULL)     return;
     cout<<"The "<< temp-> data <<" is deleted from linked list "<<endl;
     node* del = temp ;
     temp = temp -> prev;
     temp -> next = del -> next;
     del -> next -> prev = temp;
     delete del;
}
//append last k nodes of a linked list 
// from last k nodes insert at the beginneres
/*
     1    <==> 2    <==>      3    <==> 4    <==> 5    <==> 6 <==> NULL
     Now we have to  select the last k nodes and make kth node head     
*/

// length
int length(node* head){
     int l =0;
     node* temp = head;
     while(temp!= NULL){
          l++;
          temp = temp-> next;
     }
     return l;
}
// Time complexity
node * kappend(node* head, int k){
     node* newhead;
     node* newTail;
     node* tail;

     int l = length(head);
     int count =1;

     while( tail -> next !=NULL){
          if(count == l-k){
               newTail = tail;
          }
          if(count == l-k+1){
               newhead = tail;
          }
          tail = tail ->next;
          count++;
     }
     newTail ->next = NULL;
     tail -> next = head;
     return newhead;
}

int main(){
     // node* head = NULL;
     // insertTail(head,1);
     // insertTail(head,2);
     // insertTail(head,3);
     // insertTail(head,4);
     // insertTail(head,5);
     // insertTail(head,6);
     // insertAtHead(head,0);

     // deletion(head, 4);

     // node* newhead = kappend(head,3);
     // display(newhead);
     
   

     return 0;
}