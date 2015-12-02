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
    scanf("%s%d",A.name,&A.year);
    scanf("%s%d",B.name,&B.year);
    scanf("%s%d",C.name,&C.year);
    scanf("%s%d",D.name,&D.year);
    printf("%s %d\n",A.name,A.year);
    printf("%s %d\n",B.name,B.year);
    printf("%s %d\n",C.name,C.year);
    printf("%s %d\n",D.name,D.year);
    return 0;
}
