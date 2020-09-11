// jump.cpp by Bill Weinman <http://bw.org/>
// a simple jump table
// updated for C++ EssT 2018-08-08

#include <cstdio>
#include <vector>

#if 1
using namespace std;

const char * prompt();
int jump( const char * );

void fa() { puts("this is fa()"); }
void fb() { puts("this is fb()"); }
void fc() { puts("this is fc()"); }
void fd() { puts("this is fd()"); }
void fe() { puts("this is fe()"); }

void (*funcs[])() = { fa, fb, fc, fd, fe };

void sort_priorities() {
    std::vector<int> _priorities = {3, 5, 2, 1};
    
    std::sort(_priorities.begin(),
        _priorities.end(),
        []( auto &first, auto &sec ) -> bool
        {
            return first < sec;
        } );
    
    for (int i : _priorities) {
        printf("%d\n", i);
    }
}

int main() {
    while(jump(prompt())) ;
    puts("\nDone.");
    
    sort_priorities();
    return 0;
}

const char * prompt() {
    puts("Choose an option:");
    puts("1. Function fa()");
    puts("2. Function fb()");
    puts("3. Function fc()");
    puts("4. Function fd()");
    puts("5. Function fe()");
    puts("Q. Quit.");
    printf(">> ");
    fflush(stdout);                 // flush after prompt
    
    const int buffsz = 16;          // constant for buffer size
    static char response[buffsz];   // static storage for response buffer
    fgets(response, buffsz, stdin); // get response from console
    
    return response;
}

int jump( const char * rs ) {
    char code = rs[0];
    if(code == 'q' || code == 'Q') return 0;
    
    // get the length of the funcs array
    int func_length = sizeof(funcs) / sizeof(funcs[0]);
    
    int i = (int) code - '0';   // convert ASCII numeral to int
    if( i < 1 || i > func_length ) {
        puts("invalid choice");
        return 1;
    } else {
        funcs[i - 1]();         // array is zero-based
        return 1;
    }
    
}

#endif
