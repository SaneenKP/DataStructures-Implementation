//Doubly linked list is a form of linked list in which a node can connect to both next and previous element.
#include<iostream>


//Node class for each node which holds value and the address of next node.
class Node{

    private:
    int value;
    Node* next;
    Node* prev;

    public:

    //Constructor initialises the node.
    Node(int value){
        this->value = value;
        this->next = NULL;
    }

    void setValue(int value){
        this->value = value;
    }

    void setNext(Node* next){
        this->next = next;
    }

    void setPrev(Node* Prev){
        this->prev = prev;
    }

    int getValue(){return this->value;}
    Node* getNext(){return this->next;}
    Node* getPrev(){return this->prev;}


};

//Linked List class which connects all of the nodes.
//head is the root node.
class LinkedList{

    private:
    Node* head;

    public:

    LinkedList(){
        this->head = NULL;
    }

    //insert at the head of the linked list.
    //Time complexity O(1)
    void insertAtHead(int value){

        Node* node = new Node(value); //new node created.

        if(head==NULL){
            head = node;              //if head is null then the new node becomes the head.
        }else{
            node->setNext(head);      
            head = node;
        }
    }

    //insert at the end of the linked list.
    //Time complexity O(n)
    void insertAtEnd(int value){

        Node* node = new Node(value);

        if(head==NULL){
            head = node;
        }else{

            Node* temp = head;
            while(temp->getNext() != NULL){  // iterating through all the nodes to get to the end.
                temp = temp->getNext();
            }
            temp->setNext(node);
        }

    }

    //function just to display the linked list.
    void display(){
        Node* temp = head;
        while(temp != NULL){
            std::cout<<temp->getValue()<<" -> ";
            temp = temp->getNext();
        }
    }

};




int main(){
    LinkedList ls;
    ls.insertAtHead(55);
    ls.insertAtHead(25);
    ls.insertAtHead(28372);
    ls.insertAtHead(199);
    ls.display();

}