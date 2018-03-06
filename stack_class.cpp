#include "stack.h"

void push(Stack *&head, int val);
int pop(Stack *&head);
bool isEmpty(Stack *head);

void push(Stack *&head, int val){
    
    Stack *temp = new Stack;
    temp->data = val;

    if(!head){
        head = temp;
        head ->next = NULL;
    }else{
        temp->next = head;
        head = temp;
    }
}

bool isEmpty(Stack *head){
    if(!head)
        return true;
    return false;
}

int pop(Stack *&head){
    int retVal;
    Stack *temp = head;

    if(isEmpty(head))
        return -1;
    if(head->next){
        temp = head->next;
        retVal = head->data;
        delete head;
        head = temp;
        return retVal;
    }else{
        retVal = head->data;
        delete head;
        head = NULL;
        return retVal;
    }
}


int main(){

    Stack *head = NULL;
    push(head, 10);
    //push(head, 56);
    //push(head, 56);
    //push(head, 56);
    pop(head);
    Stack *temp = head;
    while(temp){
        cout<< temp->data<< endl;
        temp = temp->next;
    }


}
