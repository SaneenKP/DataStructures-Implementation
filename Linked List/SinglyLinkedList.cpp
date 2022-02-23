#include<iostream>


class Node{

    private:
    int value;
    Node* next;

    public:

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

class LinkedList{

    private:
    Node* head;

    public:

    LinkedList(){
        this->head = NULL;
    }

    void insertAtHead(int value){

        Node* node = new Node(value);

        if(head==NULL){
            head = node;
        }else{
            node->setNext(head);
            head = node;
        }
    }

    void insertAtEnd(int value){

        Node* node = new Node(value);

        if(head==NULL){
            head = node;
        }else{

            Node* temp = head;
            while(temp->getNext() != NULL){
                temp = temp->getNext();
            }
            temp->setNext(node);
        }

    }

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