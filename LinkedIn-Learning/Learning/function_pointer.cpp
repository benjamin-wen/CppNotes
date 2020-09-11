//
//  function_pointer.cpp
//  Learning
//
//  Created by Zhishen Wen on 8/30/20.
//  Copyright © 2020 Benjamin Wen. All rights reserved.
//

#include <stdio.h>
#include <string>

#if 0
using namespace std;


int foo(int i) {
    return ++i;
}

int process(int i, int (*action)(int)) {
    printf("The passed in number(%d) is being processed.\n", i);
    return action(i * 2);
}

int main(int argc, const char * argv[]) {
    int (*funcPtr)(int) = foo;
    printf("%d\n", funcPtr(1));
    printf("%d\n", process(1, funcPtr));
    return 0;
}
#endif
