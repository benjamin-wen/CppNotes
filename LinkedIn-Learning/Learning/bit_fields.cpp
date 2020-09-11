//
//  bit_fields.cpp
//  Learning
//
//  Created by Zhishen Wen on 8/29/20.
//  Copyright © 2020 Benjamin Wen. All rights reserved.
//

#include <stdio.h>

#if 0

struct Preference_1 {
    bool likesMusic;
    bool hasHair;
    bool hasInternet;
    bool hasDinosar;
    unsigned int numberOfChildren;
};

struct Preference_2 {
    bool likesMusic;
    unsigned int numberOfChildren;
    bool hasHair;
    bool hasInternet;
    bool hasDinosar;
};

// with bit fields
struct Preference_3 {
    bool likesMusic : 1;
    unsigned int numberOfChildren : 4;
    bool hasHair : 1;
    bool hasInternet : 1;
    bool hasDinosar : 1;
};

// with bit fields
struct Preference_4 {
    bool likesMusic : 1;
    bool hasHair : 1;
    bool hasInternet : 1;
    bool hasDinosar : 1;
    unsigned int numberOfChildren : 4;
};

int main(int argc, const char * argv[]) {
    printf("size of unsigned int is %lu bytes\n", sizeof(unsigned int)); // 4
    
    Preference_1 pref1;
    printf("size of pref1 is %lu bytes\n", sizeof(pref1)); // 8
    
    Preference_2 pref2;
    printf("size of pref2 is %lu bytes\n", sizeof(pref2)); // 12
    
    Preference_3 pref3;
    printf("size of pref3 is %lu bytes\n", sizeof(pref3)); // 4
    
    Preference_4 pref4;
    printf("size of pref4 is %lu bytes\n", sizeof(pref4)); // 4
    return 0;
}
#endif
