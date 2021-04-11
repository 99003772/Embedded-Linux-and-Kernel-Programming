#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define __NR_testcall 402
int main() {
printf("hi i am souvik");
int ret;
ret=syscall(__NR_testcall);
printf("\nreversed string is %d\n", ret);
if(ret<0)
perror("testcall");
return 0;
}
