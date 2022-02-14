#include<iostream>

class Node
{
    private : 

    int value;
    Node* left;
    Node* right;

    public:

    void setValue(int v) {value = v;}
    void setRightNode(Node* r) {right = r;}
    void setLeftNode(Node* l) {left = l;}
    int getValue(){return value;}
    Node* getLeft(){return left;}
    Node* getRight(){return right;}
};

class BST
{

private:

    Node* root = NULL;

public:

    Node* insert(Node* root ,int value){

        if (root == NULL)
        {
            root = createNode(value , NULL ,  NULL);
        }else if(value <= root->getValue()){
            root->setLeftNode(insert(root->getLeft() , value));
        }else{
            root->setRightNode(insert(root->getRight() , value));
        }
        return root;
    }

    Node* createNode(int value , Node* left , Node* right){

        Node* newNode = new Node();
        newNode->setValue(value);
        newNode->setLeftNode(left);
        newNode->setRightNode(right);
        return newNode;
    }

   void Inorder(Node* root)
    {
    if (!root) {
        return;
    }
    Inorder(root->getLeft());
    std::cout << root->getValue() <<" - ";
    Inorder(root->getRight());
}

    
};

int main(){
    BST b;
    Node* root = NULL;
    root = b.insert(root, 50);
    b.insert(root, 30);
    b.insert(root, 20);
    b.insert(root, 40);
    b.insert(root, 70);
    b.insert(root, 60);
    b.insert(root, 80);
 
    b.Inorder(root);
    return 0;

}