#include <stdio.h>
#include <string.h>
int main(){
    char a[20];
    int i, l;
    int f = 0;
    
    printf("Enter a string:");
    scanf("%s", a);
    
    l = strlen(a);
    
    for(i=0;i < l ;i++){
        if(a[i] != a[l-i-1]){
            f = 1;
            break;
   }
}
    
    if (f==1) {
        printf("%s is not a palindrome", a);
    }    
    else {
        printf("%s is a palindrome", a);
    }
    return 0;
}

