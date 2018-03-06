#include<stdio.h>
#include<cctype>
#include<iostream>
#include<cstring>
using namespace std;

struct Node{
    Node *next;
    int data;
};

class Stack{

    public:
        Stack();
        Stack(const Stack &);
        ~Stack();
        int push(int val);
        int pop();
        bool isEmpty();
        int size();
        void display();

    private:
        Node *head;
};

Stack::Stack(){
   head = NULL;
}


Stack::Stack(const Stack &){
    head = NULL;
}

Stack::~Stack(){


    if(!isEmpty()){
            Node *temp = head;
            while(head){
                temp = head;
                head = head->next;
                delete temp;
            }
    }
}

int Stack::size(){

    int count = 0;
    Node *temp = head;
    if(head){
        while(temp){
            count += 1;
            temp = temp->next;
        }
    }
    return count;
}

void Stack::display(){

    Node *temp = head;
    if(isEmpty())
        cout<<"The stack is empty" <<endl;
    else if(!isEmpty()){
        while(temp){
            cout<< temp->data << endl;
            temp = temp->next;
        }
    }
}

//int Stack::push(Node *head, int val){
int Stack::push(int val){
   
    Node *temp = new Node;
    temp->data = val;
    if(isEmpty()){
        head =temp;
        head->next = NULL;
        return 1;
    }else{
        temp->next = head;
        head = temp;
        return 1;
    }
    return -1;
}

bool Stack::isEmpty(){

    if(!head)
        return true;
    else return false;
}

int Stack::pop(){
    
    int retVal = 0;;
    Node *temp = head;

    if(isEmpty())
        return 0;
    else if(head->next){
        temp = head;
        head = head->next;
        retVal = temp ->data;
        delete temp;
        return retVal;
    } else if(!head->next){
        retVal = head->data;
        delete head;
        head = NULL;
        return retVal;
    }
    return -1;
}








