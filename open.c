#include "syscall.h"
int main(){
    int result;
    result=Open("test.txt");
    Halt();
}
