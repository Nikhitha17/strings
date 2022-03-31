#include <stdio.h>
#include <string.h>
int main()
{
     char s1[10] = "Thunder";
     char s2[10] = "soft";
     strcat(s1,s2);
     printf("Output string after concatenation: %s", s1);
     return 0;
}
