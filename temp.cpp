// #include<iostream>
// using namespace std;


// class node{
//      public:
//      int data;
//      node* next;
//      node(int val){
//           data = val;
//           next = NULL;
//      }
// };
// void insertAtTail(node* &head, int x){
//      node* n=  new node(x);
//      if(head==NULL){
//           head=n; 
//           return;
//      }
//      node* temp = head;
//      while(temp->next!=NULL){
//           temp= temp-> next;
//      }
//      temp->next = n;
     
// }
// void display(node* head){
//      node* temp = head;
//      while(temp != NULL){
//           cout<< temp-> data << " -> ";
//           temp = temp -> next;
//      }
//      cout<<"NULL"<<endl;
// }
// // call by reference
// void insertAtHead(node* &head, int val){
//      node* n = new node(val);
//      n-> next = head;
//      head = n;
// }

// //  insert after a perticular 
// void insertAfter(node* head,int key,int val){
//      node* curr = head;
//      while(curr !=NULL && curr->data != key){
//           curr=curr-> next;
//      }
//      if(curr == NULL)
//           return;
//      node* n = new node(val);
//      n->next = curr->next;
//      curr->next = n;
// }
// int main(){
//      node* head=NULL;
//      insertAtTail(head,1);
//      insertAtTail(head,2);
//      // insertAtTail(head,3);
//      insertAtTail(head,4);
//      insertAtTail(head,5);
     
//      insertAtHead(head, 0);
//      insertAfter(head, 2,3);
//      display(head);
//      // cout<< head->data;
//      return 0;
// }


#include<iostream>
using namespace std;

int main(){
     // int a =5;
     // cout<< (a++)*(a++)<<endl;

     // cout<<a;
     int arr[]={1,2,4};
     // address of first index address of integer
     // cout<<arr<<endl;

     // base address of array arr 
     cout<<&arr<<endl;
     cout<<arr+1<<endl;
     return 0;
}