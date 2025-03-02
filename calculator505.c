#include<stdio.h>
int main(){
    int choice;
    float num1,num2,num3,num4,result;
    printf("Menu\n");
    printf("1. Addition\n");
    printf("2. Multiplication\n");
    printf("3. Subtraction\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your Choice-");
    scanf("%d",&choice);
    if(choice >=1 && choice <=4){
        printf("Enter four number");
    scanf("%f%f%f%f",&num1,&num2,&num3,&num4);
    switch (choice){
        case 1:
        result = num1+num2+num3+num4;
        printf("Result %.4f\n",result);
        break;

        case 2:
        result = num1*num2*num3*num4;
        printf("Result %.4f\n",result);
      break;
       
        case 3:
        result = num1-num2-num3-num4;
        printf("Result %.4f\n",result);
        break;

        case 4:
        if(num4!=0){
            result = num1/num2/num3/num4;
            printf("Result %.2f\n,result");
        break;
       }else{
        printf("Error: Division by zero is not allowed\n");
       }
       break;
       case 5:
       printf("Exiting program...\n");
       break;
       default:
       printf("Invalid choice. Please try again\n");

       }
       return 0 ;
}
}