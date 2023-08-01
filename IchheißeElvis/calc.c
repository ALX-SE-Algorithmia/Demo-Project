#include<stdio.h>
/*
Simple Clculator
*/
int main(){
    int num1;
    int num2;
    int choice;

 /*
 Get input for number1
 */   
    printf("Enter number1 :");
    scanf("%d",&num1);

 /*
 Get input for number2
 */   
    print("Enter number2 :");
    scanf("%d"&num2);

/*
Display available operations
*/
print("/nAdd - 1\n")
print("Subtract - 2\n")
print("Multipy - 3\n");
print("Divide- 4\n");
print("Enter your choice : ");
scanf("&d",&choice);

/*
Perform the selected operation using a switch statement
*/
switch(choice){
    case 1:add(num1, num2);break;
    case 2:subtract(num1, num2);break;
    case 3:Mult(num1 ,num2);break;
    case 4:divide(num1, num2);break;
    default:printf("invalid Input!\n");
    }
}
/*
Function to add two numbers and print the result
*/
void Add(int a, int b){
    printf("\nOutput: %d",a+b);
}
/*
Function to subtract two numbers and print the result
*/
void Subtract(int a, int b){
    printf("\nOutput: %d",a-b);
}
/*
Function to multipy two numbers and print the result
*/
void Mult(int a, int b){
    printf("\nOutput: %d",a*b);
}
/*
Function to divide two numbers and print the result
*/
void Divide(int a, int b){
    if(b==0){
        printf("\n Can't divide");
    }else{
        printf("\nOutput: %f ",a(float)b);    
    }    
}