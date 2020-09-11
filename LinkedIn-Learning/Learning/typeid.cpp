//
//  typeid.cpp
//  Learning
//
//  Created by Zhishen Wen on 8/30/20.
//  Copyright © 2020 Benjamin Wen. All rights reserved.
//

#include <stdio.h>
#include <typeinfo>

#if 0
using namespace std;

struct X { int x; };
struct CrazyStruct { int x; };

int main(int argc, const char * argv[]) {
    printf("type is %s\n", typeid(long int).name()); // l
    printf("type is %s\n", typeid(char).name()); // c
    printf("type is %s\n", typeid(CrazyStruct).name()); //11CrazyStruct
    
    return 0;
}
#endif
