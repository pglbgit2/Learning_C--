#include <stdio.h>
#include <string.h>
#include <iostream>
int main(){
 char buf[5];
 char buf2[20];
 strcpy(buf, "testing overflowing");
 std::cout << buf;

}
