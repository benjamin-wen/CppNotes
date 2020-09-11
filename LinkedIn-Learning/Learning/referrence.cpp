//
//  referrence.cpp
//  Learning
//
//  Created by Zhishen Wen on 8/29/20.
//  Copyright © 2020 Benjamin Wen. All rights reserved.
//

#include <stdio.h>

#if 0
using namespace std;

const int & foo(const int & i) {
    int j = i;
    return ++j;
}

int main(int argc, const char *argv[]) {
    int i = 5;
    int & ir = i;
    ir = 50;
    printf("sdf %d\n", i);
    
    return 0;
}
#endif
