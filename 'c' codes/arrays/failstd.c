#include <stdio.h>
int main () {

int student[10]={90,80,32,33,98,55,65,45,30,19};

for(int i=0;i<10;i++) {

if(student[i]<35) 
      printf("student[%d] is fail. His marks is =%d\n", student[10],student[i]);

}

//   int max = student[0];
   
//    for(int i=0;i<10;i++) {
        
//         if(max<student[i]){
//               max =student[i];
//                  printf("Topper student is student[%d] he got %d ",i ,max);
//         }
       
//    }



    return 0;

}