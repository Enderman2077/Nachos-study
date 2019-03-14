#include "syscall.h"
int main(){
    int result,id;
    id=Open("test.txt");
    result = Write("SysCall Test for Nachos!\n",25,id);
    Halt();
    /* not reached */
}
