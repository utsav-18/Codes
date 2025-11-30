/*Write a C program to play a guessing game with the user .
 Your program should use a while loop and multi-way branch if (i.e. use else if).*/

 #include <stdio.h>
int main() {
    int n;
  
printf("Start guessing a random number which is when divided by a num gives 21  :\n");

  while (n!=42){
   scanf("%d",&n);
    
    if(n>42) printf("Too high - guess again\n");
    else if (n<42) printf("Too low - guess again\n");
     else if (n==42) printf("Nice work!\n");                     
      
  }
  
  return  0;
}