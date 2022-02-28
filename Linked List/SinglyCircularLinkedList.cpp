#include<iostream>


//Node class for each node which holds value and the address of next node.
class Node{

    private:
    int value;
    Node* next;

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

    int getValue(){return this->value;}
    Node* getNext(){return this->next;}


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
    //Time complexity O(n).
    void insertAtHead(int value){

        Node* node = new Node(value); //new node created.

        if (head == NULL){
            node->setNext(node);
            head = node;
            return;
        }

        Node* temp = head;
        while (temp->getNext() != head)
            temp = temp->getNext();

        temp->setNext(node);
        node->setNext(head);
        head = node;
    }

    //insert at the end of the linked list.
    //Time complexity O(n).
    void insertAtEnd(int value){

        if(head==NULL){
            insertAtHead(value);
            return;
        }

        Node* node = new Node(value);
        Node* temp = head;

        while (temp->getNext() != head)
            temp = temp->getNext();
        
        temp->setNext(node);
        node->setNext(head);
    }

    //function just to display the linked list.
    void display(){

        Node* temp = head;
        if (head != NULL)
        {
            do
            {
                std::cout<<temp->getValue()<<" -> ";
                temp = temp->getNext();
            } while (temp != head);
        }
    }
};




int main(){
    LinkedList ls;
    ls.insertAtEnd(55);
    ls.insertAtEnd(25);
    ls.insertAtEnd(534);
    ls.insertAtEnd(53245);
    ls.display();

}