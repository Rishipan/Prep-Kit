// Linked List Searching
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

bool searchIterative(Node* head, int val){
    Node* curr=head;
    while(curr){
        if(curr->data = val) return true;
        curr=curr->next;
    }
    return false;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    
    cout<<"Through iteration: ";
    if(searchIterative(head,5)==true) cout<<"Preasent";
    else cout<<"Not present";

    return 0;
}