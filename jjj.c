#include <stdio.h>
#include <string.h>
int main(){
    
    // Check if the number is even or odd
    int number;
    char choice[10];
    do{


    printf("Enter any Number");
    scanf("%d" , &number);
    if(number % 2 == 0){
        printf("%dEven Number!" ,number);
    }else{
        printf("%d Odd Number!" ,number);
    }

        
    printf("\nDo you want to continue? (yes/no): ");
        scanf("%s", choice);
    }while(strcmp(choice, "yes") == 0);
    scanf("%s", choice);


    }while(strcmp(choice, "yes") == 0);
    printf("Thank you for using the program. Goodbye!\n");

    
    return 0;
