#include <stdio.h>
int main() {

char arr[] = "I AM IRON MAN !!";
 
 int i=0;
while (arr[i]!='\0'){            // '\0' is autometically considered 
printf("%c",arr[i]);
i++;
}

return 0;
}