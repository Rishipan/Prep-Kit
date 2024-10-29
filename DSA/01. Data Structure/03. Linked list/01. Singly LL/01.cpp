// Linked List Insertion
// Time Complexity -> O(N)
// Space Complexity -> O(1)

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int new_data){
        data=new_data;
        next=nullptr;
    }
};

// Function insert node at begining
Node* insertAtFront(Node* head, int new_data){
    Node* new_node=new Node(new_data);
    new_node->next=head;
    return new_node;
}

// Function insert node at last
Node* insertAtEnd(Node* head, int new_data){
    Node* new_node=new Node(new_data);
    Node* curr=head;
    while(curr->next){
        curr=curr->next;
    }
    curr->next=new_node;
    return head;
}

// Function to insert a new node after a given node
Node* insertAfter(Node* head, int key, int new_data){
    Node* curr=head;
    Node* new_node=new Node(new_data);

    while(curr){
        if(curr->data == key) break;
        curr=curr->next;
    }
    new_node->next=curr->next;
    curr->next=new_node;
    
    return head;
}

// Function to insert a new node before a given node
Node* insertBefore(Node* head, int key, int new_data){
    Node* curr=head;
    Node* new_node=new Node(new_data);

    while(curr->next){
        if(curr->next->data == key) break;
        curr=curr->next;
    }
    new_node->next=curr->next;
    curr->next=new_node;
    
    return head;
}

void printList(Node* head){
    Node* curr=head;
    while(curr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    cout<<"Original Linked list: ";
    printList(head);

    head=insertAtEnd(head, 5);
    cout<<"\nEnd Insertion list: ";
    printList(head);

    head=insertAtFront(head, 0);
    cout<<"\nFront Insertion list: ";
    printList(head);

    head=insertAfter(head, 3, 6);
    cout<<"\nKey After Insertion list: ";
    printList(head);

    head=insertBefore(head, 4, 7);
    cout<<"\nKey After Insertion list: ";
    printList(head);

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;

//     Node(int new_data){
//         data=new_data;
//         next=nullptr;
//     }
// };

// // Function insert node at last
// Node* insertAtEnd(Node* head, int new_data){
//     Node* new_node=new Node(new_data);
//     Node* curr=head;
//     while(curr->next){
//         curr=curr->next;
//     }
//     curr->next=new_node;
//     return head;
// }

// void printList(Node* head){
//     Node* curr=head;
//     while(curr){
//         cout<<curr->data<<" ";
//         curr=curr->next;
//     }
//     cout<<endl;
// }

// int main(){
//     Node* head = new Node(-1);

//     cout<<"Enter size: ";
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     cout<<"Enter elements: ";
//     for(int i=0; i<n; i++) cin>>v[i];
//     cout<<"Enter inserting value: ";
//     int x;
//     cin>>x;

//     for(int i=0; i<n; i++){
//         head=insertAtEnd(head, v[i]);
//     }
    
//     head=insertAtEnd(head, x);
//     head=head->next;
//     cout<<"\nEnd Insertion list: ";
//     printList(head);

//     return 0;
// }