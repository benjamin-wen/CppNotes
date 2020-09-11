//
//  unambiguous_null_pointer_constant.cpp
//  Learning
//
//  Created by Zhishen Wen on 8/29/20.
//  Copyright © 2020 Benjamin Wen. All rights reserved.
//

#include <stdio.h>

#if 0

#ifndef NULL
#define NULL (0) // common C++ definition
#endif

void f(int i) {
    printf("The int is %d\n", i);
}

void f(const char * s) {
    printf("The pointer is %p\n", s);
}

int main(int argc, const char * argv[]) {
    // overloaded functions
    f(4);
    f("Why?");
    
    // NULL is ambiguous here
    //f(NULL); // Error: Call to 'f' is ambiguous
    
    f(nullptr); // null poiter of any type
    
    f(0);
    
    return 0;
}
#endif
