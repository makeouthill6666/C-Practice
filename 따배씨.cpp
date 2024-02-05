#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
   printf("execl start/n");
   execl("/bin/ls", "ls", "-l", NULL);
   printf("if you read this message, fail creating execl func../n");
   return 0;
}
