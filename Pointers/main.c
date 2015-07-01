//
//  main.c
//  Pointers
//
//  Created by Tyler Yan on 2015-07-01.
//  Copyright (c) 2015 Foodee. All rights reserved.
//

#include <stdio.h>




int main(int argc, const char * argv[]) {
    int a = 13;
    int b = 5;
    int c = 10;
    
    int *d = &a;
    int *e = &b;
    int *f = &c;
    int *g = &c;
    
    *d = a*2;
    *f +=1;
    g = e;
    *g += 4;
    
    
    
    
    
    printf("%d, %d, %d\n",a, b, c);
    return 0;
}

