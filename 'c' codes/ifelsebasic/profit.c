#include <stdio.h>
int main() {
    int  cp;
    printf("Enter cost price:");
    scanf("%d",&cp);
    
    int sp;
    printf("Enter selling price :");
    scanf("%d", &sp);
    
    if (sp>cp) {
        int p=sp-cp;
        
        printf("Profit: %d",p);
    
    }
    else if(cp>sp) {
        int l=cp-sp;
        
        printf("Loss:%d",l);
    }

    else if (cp=sp) {
        printf("NO profit NO loss");
    }
    
    return 0;
}
