#include <stdio.h>
int main() {

char arr[5] = { 'L','A','C','O'};

printf("%c\n",arr[0]);           //arr[0] => 0[arr] => *(arr + i)

char brr[4]={'0','1','2','9'};

printf("%c\n",brr[0]);

printf("%d\n",brr[0]);

printf("%d",brr[3]);

return 0;
}