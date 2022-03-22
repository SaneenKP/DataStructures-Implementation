#include<iostream>

class Queue{

    int front;
    int back;
    int que[]
    int size;

    public:
    Queue(int size){
        this.size = size;
        que = new int[this.size];
    }

    void display(){
        int count = 1;
        for (int i = 0; i < size; i++)
        {
            que[i] = count++;
            std::cout<<que[i];
        }
        
    }
   
}

int main(){
    Queue q;
    q = new Queue(5)
    q.display();
}
