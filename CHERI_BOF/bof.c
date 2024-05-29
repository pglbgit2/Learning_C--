#include <string.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct bof_struct {
  char buf1[20];
  void (*function)();
} vulnerable_struct;


void func(){
   printf("normal function\n");
}

void func2(){
    printf("hacking attempt\n");
}

int main(int argc, char ** argv){
    vulnerable_struct vs;
    vs.function = func;
    printf("normal func: %p\n",func);
    printf("target: %p\n",func2);
    //scanf("%s",vs.buf1);
    strcpy(vs.buf1, argv[1]);
    printf("struct addr: %p\n", vs.function);
    vs.function();
    return 0;
}
