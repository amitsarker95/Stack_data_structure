#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node * next;
    Node * prev;
    Node(int val)
    {
        this->value = val;
        this->next = NULL;
        this->prev = NULL;


    }

};
class Stack
{
    Node * head;
    Node * top;
    int cnt;
    int chk;
public:
    Stack(){
        head = NULL;
        top = NULL;
        cnt = 0;
    }
      void push(int value){
        Node * newNode = new Node(value);
        if(head == NULL){
            head = newNode;
            top = newNode;
            cnt++;
            return;
        }
        top->next = newNode;
        newNode->prev = top;
        top = newNode;
        cnt++;
    };
    int pop()
    {
        Node * delNode;
        delNode = top;
        if(top == NULL) return cnt;
        if(top == head)
        {
            head = NULL;
            top = NULL;
            cnt--;
        }
        else
        {
            top = delNode->prev;
            top->next = NULL;
            cnt--;
        }
        chk = delNode->value;
        delete delNode;
        return chk;
    }
    int Size(){

        return cnt;
    }
    bool Empty()
    {
       if(head == NULL) return true;
        else return false;
    }
    int Top(){
        int ck = 0;

        if(cnt == 0){
            cout<<"Stack is empty."<<endl;
            return ck;
        }
            return top->value;


    }

};
