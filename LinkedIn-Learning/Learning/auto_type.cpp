//
//  auto_type.cpp
//  Learning
//
//  Created by Zhishen Wen on 8/29/20.
//  Copyright © 2020 Benjamin Wen. All rights reserved.
//

#include <stdio.h>


#if 0

const char *foo() {
    return "Hi";
}

bool isEqual() {
    return false;
}

int main(int argc, const char * argv[]) {
    // inferred type
    auto a = foo();
    auto b = ", you";
    printf("%s%s\n", a, b);
    return 0;
}
#endif
