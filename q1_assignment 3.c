//Assignment no.:3
//CS 201
//Data Structures
//Department of Computer Science and Engineering
//National Institute of Tehnology ,Silchar
//Question no.:1
#include <stdio.h>
#include<string.h>
int main()
{
   char c[100]="CSE Rocks";
   int hash = 7;
for (int i = 0; i < strlen(c); i++) {
    hash = hash*31 + c[i]-48;
}
  printf("%d",hash);
    return 0;
}

