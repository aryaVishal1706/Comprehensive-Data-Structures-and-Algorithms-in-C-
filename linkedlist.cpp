/**
 * array limitations
 * --> fixed space
 * --> contigoues block of memory
 * --> inserting or deleting is costly
 * 
 * linked list
 *   --> size can  be modified
 * -->    Non- contiguous memory
 * ---> insertion and deletion is not costly
 * 
 * Structure of linked list
 *      ____________  
 * Node |DATA||NEXT|
 *      ------------ 
 *      
*/
#include<iostream>
using namespace std;

/************STRUCTURE OF NODES*********************8*/
class node{
     public:
          int data;
          node* next;
     node(int val){
          data = val;
          next = NULL;
     }
};


// Function to insert into linked list
// head is by references
void insertAtTail(node* &head, int val){
     node *n = new node(val);

     if(head ==NULL)
     {
          head = n;
          return;
     }
     node* temp = head;
     while(temp-> next != NULL){
          temp=temp-> next ;
     }
     temp-> next = n;
}
// Function to print the linked list
// head is call by value 
void display(node* head){
     node* temp = head;
     while(temp !=NULL){
          cout<< temp-> data<<" -> ";
          temp = temp ->next;
     }
     cout<< "NULL" <<endl;
}

// Insert at first head
void insertAtHead(node* &head, int val){
     node* n = new node(val);
     n->next = head;
     head = n;
}
// Searching in linked list
bool search(node* head,int key)
{
     node* temp = head;
     while(temp!=NULL){
          if(temp->data == key){
               return true;
          }
          temp= temp -> next;
     }
     return false;  
}

// Delete at head
void deleteAtHead(node* &head){
     node* todelete = head;
     head= head-> next;
     delete todelete;
}
// Delete in linked list 
void deleteNode(node* &head, int key){
     if(head== NULL){
          return;
     }
     if(head->next==NULL){
          if(head->data==key)
               deleteAtHead(head);
          return;
     }
     node* temp = head;
     if(head->data == key){
          deleteAtHead(head);
          return;
     }
     while(temp->next->data != key){
           temp = temp->next;
     }
     if(temp->next->data == key){
          node* d = temp->next;
          temp-> next = temp-> next->next;
          delete d;
     }   
}

// Reverse a linked list
node* reverse(node* &head){
     node* prevptr = NULL;
     node* currptr = head;
     node*nextptr;

     while(currptr !=NULL)
     {
          nextptr = currptr->next;
          currptr->next = prevptr;
          prevptr = currptr;
          currptr = nextptr;
     }
     return prevptr;
}

/*************REVERSE A LINKED LIST USING RECURSIVE WAY**********************8*/
node* reverseRecursive(node* &head){
     if(head && head->next ==NULL){
          return head;
     }
     node* newhead = reverseRecursive(head->next);
     head -> next -> next = head;
     head->next = NULL;
     return newhead;
}

// reverse a linkelist with k nodes
// Input : 1 -> 2 -> 3 -> 4 -> 5 -> 6
// k -> 2
// output :- 2 -> 1 -> 4 -> 3 -> 6 -> 5
// Time Complexity --> O(N)
node* reversek(node* &head, int k){
     node* prevptr = NULL;
     node* currptr = head;
     node* nextptr;
     int count =0;
     while(currptr != NULL && count < k){
          nextptr = currptr->next;
          currptr -> next = prevptr;
          prevptr = currptr;
          currptr = nextptr;
          count++;
     }
     if(nextptr !=NULL){
          head ->next = reversek(nextptr,k);
     }
     return prevptr;
}

/*************CREATE A CYCLE USING**********************8*/
void createCycle(node* &head,int pos){
     node* temp = head;
     node* start;
     int count=1;
     while(temp->next !=NULL){
          if(count == pos){
               start = temp;
          }
          temp = temp-> next;
          count++;
     }
     temp->next = start;
}

// detection and removal cycle in linked list
bool detectCycle(node* head){
     node* slow = head;
     node* fast = head;

     while(fast!=NULL && fast->next != NULL){
          fast = fast -> next ->next;
          slow = slow -> next;
          if(fast == slow){
               printf("The Linked List contains a Cycle\n");
               return 1;
          }
     }

     return 0;
}

// cycle removal in linked list 
void removeCycle(node* head) {
     node* slow = head;
     node* fast = head;

     do
     {
          slow = slow -> next;
          fast = fast -> next -> next;
     } while (slow != fast);

     fast = head;
     while(fast -> next != slow->next){
          slow = slow -> next;
          fast = fast -> next;
     }
     slow -> next = NULL;
}


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

/*
     find the intersection in linked list

     we are given two head pointer of 2 different
     linked list 
     we have to return true if the 2 linked list have the
     intersections
     else return there is no intersections

     Approach 1:
          take all elements of lined list 1 with given head 1
          and store it into a map or set anything and mark it as visited
     
          now search in the head2 (2nd linked list) for every nodes
          then find out intersections
     
     Approach 2 :
          --> take a length of 2 linked list
          --> now start the pointer of both the array at the some positions
          --> kth positions

*/
int intersection(node* &head1, node* &head2){
     int l1 = length(head1);
     int l2 = length(head2);

     int d =0;
     node* ptr1;
     node* ptr2;

     if(l1>l2){
          d = l1 - l2;
          ptr1 = head1;
          ptr2 = head2;
     }
     else{
          d = l2 - l1;
          ptr1 = head2;
          ptr2 = head1;
     }

     while (d )
     {
          ptr1 = ptr1 -> next;
          if(ptr1 == NULL){
               return -1;
          }
          d--;
     }

     while (ptr1 != NULL && ptr2 != NULL)
     {
          if(ptr1 == ptr2){
               return ptr1 -> data;
          }
          ptr1 = ptr1 -> next;
          ptr2 = ptr2->next;
     }
     return -1;
     

}

// create a intersection between 2 linked list
void intersect(node* &head1, node* &head2,int pos){
     node* temp1 = head1;
     pos--;
     while(pos--){
          temp1 =  temp1 -> next;
     }
     node* temp2 = head2;
     while(temp2-> next != NULL){
          temp2 = temp2 -> next;
     }

     temp2 -> next = temp1;

}


/************MERGE TWO SORTED LINKED LIST**********************8*/

   
int main(){
     // node* head = NULL;
     
     // insertAtTail(head,1); 
     // insertAtTail(head,2); 
     // insertAtTail(head,3); 
     // insertAtTail(head,4); 
     // insertAtTail(head,5); 
     // insertAtTail(head,6); 
     // insertAtHead(head,8); 

     // deleteNode(head,4);
     // display(head);
     // head = reverse(head);
     // head = reverseRecursive(head);

     // int k=2;
   
     /*************REVERSE A K NODES OF LINKED LIST**********************8*/
     // node* newhead = reversek(head,k);
     // display(newhead);

     /*************DISPLAY A LINKED LIST **********************8*/
     // display(head);

     /*************SEARCH ELEMENT IN LINKED LIST **********************8*/
     // if(search(head,8)){
     //      cout<<"Element is found in linked list"<<endl;
     // }
     // if(search(head,0)){
     //      cout<<"Element is found in linked list"<<endl;
     // }
     
     /*************CYCLE IN LINKED LIST**********************8*/
   
     // createCycle(head,3);
     // detectCycle(head);
     // removeCycle(head);
     // display(head);


     /*************CHECK INTERSECTION **********************8*/
     // node* head1 = NULL;
     // insertAtTail(head1,1);
     // insertAtTail(head1,2);
     // insertAtTail(head1,3);
     // insertAtTail(head1,4);

     // node* head2 = NULL;
     // insertAtTail(head2,1);
     // insertAtTail(head2,2);
     // insertAtTail(head2,3);
     // insertAtTail(head2,4);
     // insertAtTail(head2,5);
     // insertAtTail(head2,6);
     // insertAtTail(head2,7);
     // intersect(head2,head1,5);
     // int x = intersection(head1, head2);
     // // cout<< x;
     // if(x==-1){
     //      cout<< "There is no intersections."<<endl;
     // }
     // else{
     //      cout<< "There is intersection at element of "<< x<<"."<<endl;
     // }

     // display(head1);

     /*************MERGE 2 SORTED LINKED LIST**********************8*/
   
     return 0;
}