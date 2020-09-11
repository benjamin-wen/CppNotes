//
//  sizeof.cpp
//  Learning
//
//  Created by Zhishen Wen on 8/30/20.
//  Copyright © 2020 Benjamin Wen. All rights reserved.
//

#include <stdio.h>
#if 0
using namespace std;
 
// sizeof is a operator

int main(int argc, const char * argv[]) {
    int i = 3;
    size_t int_size = sizeof i;
    
    size_t char_size = sizeof(char);
    // Error: Expected parentheses around type name in sizeof expression
//    size_t char_size = sizeof char;
    
    printf("int_size: %ld, char_size: %ld\n", int_size, char_size);
    return 0;
}
#endif
