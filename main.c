typedef struct struct_test {
  char buf1[10];
  char buf2[5];
  char buf3[25];
} test_struct;

int main(int argc, char ** argv){
  test_struct ts1;
  ts1.buf2[0]='t';
  strcpy(ts1.buf2+1,"esting overflowing");
  printf("%s\n",ts1.buf2);
  return 0;
}
