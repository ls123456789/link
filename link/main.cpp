//
//  main.cpp
//  link
//
//  Created by admin on 15/12/2.
//  Copyright © 2015年 内师大. All rights reserved.
//

#include <iostream>
struct student
{
    char name[100];
    int year;
    student *next;
};
int main(int argc, const char * argv[]) {
    // insert code here...
    int i;
    student *p,*head,*q;
    head = new student;
    head->next = 0;
    p = head;
    for(i=0;i<4;i++)
    {
        q = new student;
        q->next = 0;
        p->next = q;
        scanf("%s %d",q->name,&(q->year));
        p = q;
    }
    p = head->next;
    while (p!=0) {
        printf("%s %d\n",p->name,p->year);
        p = p->next;
    }
    p = head->next;
    while (p!=0) {
        q = p;
        p = p->next;
        free(q);
        
    }
    return 0;
}
