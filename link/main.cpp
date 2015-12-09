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
    
    student A,B,C,D;
    student *p,*head;
    scanf("%s%d",A.name,&A.year);
    scanf("%s%d",B.name,&B.year);
    scanf("%s%d",C.name,&C.year);
    scanf("%s%d",D.name,&D.year);
    A.next = &B;
    B.next = &C;
    C.next = &D;
    D.next = 0;
    head = &A;
    p = head;
    while (p!=0) {
        printf("%s %d\n",p->name,p->year);
        p = p->next;
    }
    return 0;
}
