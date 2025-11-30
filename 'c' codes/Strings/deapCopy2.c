#include <stdio.h>
int main () {

char name1[]="Utsav Raj";    
char* ptr =name1;
int size =0;

printf("name1=> %s\n",name1);

while(*ptr!='\0'){
   size++;
   ptr++;
}

printf(" size=> %d\n",size);

// giving one string value to other; //using pointer we can easily do this;

char name2[size];

for(int i=0;i<=size;i++){
    name2[i]=name1[i];
    
}

printf("name2=> %s\n",name2);

    return 0;
}