//
//  main.cpp
//  Learning
//
//  Created by Zhishen Wen on 8/29/20.
//  Copyright © 2020 Benjamin Wen. All rights reserved.
//

#include <iostream>
//#include <cstdio>
#if 0
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    puts("Hello, world!");
    //identifiers
    for (int i = 0; i < argc; i++) {
        puts(argv[i]);
    }
    char *cstr = "kdasd"; // ISO C++11 does not allow conversion from string literal to 'char *'
    // range-based for loop
    char str[] = "You too";
    for (char p : str) {
        printf("char is %c\n", p);
    }
    cout << "Hello, World!" << endl;
    
    long long ab = 234LL;
    printf("sizeof ab is %d", sizeof(ab));

    return 0;
}
#endif
