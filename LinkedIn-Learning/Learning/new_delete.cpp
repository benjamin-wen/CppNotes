//
//  new_delete.cpp
//  Learning
//
//  Created by Zhishen Wen on 8/30/20.
//  Copyright © 2020 Benjamin Wen. All rights reserved.
//

#include <stdio.h>
#include <new>

#if 0
using namespace std;
constexpr size_t count = 1024;

int main(int argc, const char * argv[]) {
    long int * ip;
    
    try {
        ip = new long int[count];
    } catch (std::bad_alloc &ba) {
        fprintf(stderr, "Cannot allocate memory (%s)\n", ba.what());
        return 1;
    }
    
#if 1
    // new: nothrow version
    ip = new(nothrow) long int[count];
    if (ip == nullptr) {
        fprintf(stderr, "Cannot allocate memory\n");
    }
#endif
    
    for (long int i = 0; i < count; ++i) {
        ip[i] = i;
    }
    
    for (long int i = 0; i < count; ++i) {
        printf("%ld, ", ip[i]);
    }
    
    delete [] ip; // delete a chunk of units
//    delete ptr; // delete a single unit
    return 0;
}
#endif
