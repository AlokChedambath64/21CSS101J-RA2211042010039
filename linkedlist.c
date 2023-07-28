#include<stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void addfirst(int data);

void printlist();

struct node *head = NULL;

void main(){
    addfirst(3);
    addfirst(2);
    addfirst(1);
    printlist();
}

void addfirst(int data){

    struct node *node1;

    node1 = malloc(sizeof(struct node));
    node1->data = data;


    if (head == NULL){
        head = node1;
        node1->next = NULL;
    }else {
        node1->next = head;
        head = node1;
    }
}

void printlist(){
    struct node *temp;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

