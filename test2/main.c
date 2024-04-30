#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void func(void){
   printf("testing something\n");
}

void copy(char * arg){
  char buffer[60];
  
  printf("true return address: %p\n",__builtin_return_address(0));
  strcpy(buffer, arg);
  printf("after strcpy\n");
  printf("buf:%p\n",buffer);
  printf("funct:%p\n",func);
  printf("true return address: %p\n",__builtin_return_address(0));
  //printf("everything:%s\n",buffer);

  

}

int main(int argc, char **argv){
  //char * buf = calloc(500,1);
  //scanf("%s",buf);
  printf("size:%li\n",strlen(argv[1]));
  copy(argv[1]);
  printf("normal exit\n");
  return 0;
}
