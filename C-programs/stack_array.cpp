#include<iostream>
using namespace std; 

#define MAX_SIZE 5

void initStack();
int isEmpty();
int isFull();
void push(int);
void pop();


int STACK[MAX_SIZE];
int TOP;

typedef enum{
    False = 1,
    True
}return_e;

//stack initialization
void initStack(){
    TOP=-1;
}

//check it is empty or not
int isEmpty(){
    if(TOP==-1)
        return False;
    else
        return True;
}

//check stack is full or not
int isFull(){
    if(TOP==MAX_SIZE-1)
        return False;
    else   
        return True;
}

void push(int num){
    if(isFull()){
        cout<<"STACK is FULL."<<endl;
        return; 
    }
    STACK[++TOP]=num;
    cout<<num<<" has been inserted."<<endl;
}

//pop - to remove item
void pop(){
    int temp;
    if(isEmpty()){
        cout<<"STACK is EMPTY."<<endl;
        return;
    }
     
    temp=STACK[TOP--];
    cout<<temp<<" has been deleted."<<endl;   
}