//
//  struct.cpp
//  Learning
//
//  Created by Zhishen Wen on 8/29/20.
//  Copyright © 2020 Benjamin Wen. All rights reserved.
//

#include <stdio.h>

#if 0

struct Employee {
    int id;
    const char *name;
    const char *role;
};

int main(int argc, const char * argv[]) {
    Employee joe =  { 40, "Joe", "HR" };
    printf("%s is the %s and has id %d\n", joe.name, joe.role, joe.id);
    
    Employee *e = &joe;
    printf("%s is the %s and has id %d\n", e->name, e->role, e->id);
    return 0;
}
#endif
