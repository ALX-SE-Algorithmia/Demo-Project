#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
void square();
void cube ();
void squareroot();
void SIN();
void COS();
void TAN();

int main()
{
    printf("\n\t scientific calculator\n\n");
    int choice;
    printf("1 : addition\n");
    printf("2 : substraction\n");
    printf("3 : multiplication\n");
    printf("5 : modulus\n");
    printf("6 : power\n");
    printf("8 : square\n");
    printf("9 : cube\n");
    printf("10 : squareroot\n");
    printf("11 : sin()\n");
    printf("12 : cos()\n");
    printf("13 : tan()\n");

    while (1)
    {
        printf("\n please choose operator: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            addition();
            break;
            case 2:
            subtraction();
            break;
            case 3:
            multiplication();
            break;
            case 4:
            division();
            break;
            case 5:
            modulus();
            break;
            case 6:
            power();
            break;;
            /*case 7:
            factorial();
            break;*/
            case 9:
            cube();
            break;
            case 10:
            squareroot();
            break;
            case 11:
            SIN();
            break;
            case 12:
            COS();
            break;
            case 13:
            TAN();
            break;
            case 0:
            exit(0);
            default:
            printf("!!Please enter the valid operation");

        }
    }
return 0;

}

void addition()
{
    int a, b;
    printf("Enter the number: ");
    scanf("%d %d", &a,&b);
    printf("sum=%d\n",a+b);
}

void subtraction()
{
    int a, b;
    printf("Enter the number: ");
    scanf("%d %d", &a,&b);
    printf("subtract=%d\n",a-b);
}

void multiplication()
{
    int a, b;
    printf("Enter the number: ");
    scanf("%d %d", &a,&b);
    printf("multiplication=%d\n",a*b);
}

void division()
{
    int a, b;
    printf("Enter the number: ");
    scanf("%d %d", &a,&b);
    printf("division= %f\n",(float)a/(float)b);
}
void modulus()
{
    int a, b;
    printf("Enter the number: ");
    scanf("%d %d", &a,&b);
    printf("modulus=%d\n",a%b);
}
/*void factorial()
{
    int i, n,factorial-1
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i=1;i<=n;i++){
        factorial=factorial*i;
    }
    printf(:factorial=%d\n,factorial);
}*/
void power()
{
    double b,p;
    printf("Enter the number: ");
    scanf("%lf %lf",&b,&p);
    double res=pow(b,p);
    printf("power= %lf\n",res);
}
void square()
{
    double b;
    printf("Enter the number: ");
    scanf("%lf",&b);
    double res=pow(b,2);
    printf("square= %lf\n",res);
}
void cube()
{
    double b;
    printf("Enter the number: ");
    scanf("%lf",&b);
    double res=pow(b,3);
    printf("cube= %lf", res);
}
void squareroot()
{
    double b;
    printf("Enter the number: ");
    scanf("%lf",&b);
    double res=sqrt(b);
    printf("squareroot=%lf\n",res);
}
void SIN()
{
    double b;
    printf("Enter the number: ");
    scanf("%lf",&b);
    double res=sin(b);
    printf("sin(%lf)=%.2lf\n",b,res);
}
void COS()
{
    double b;
    printf("Enter the number: ");
    scanf("%lf",&b);
    double res=cos(b);
    printf("cos(%lf)=%.2lf\n",b,res);
}
void TAN()
{
    double b;
    printf("Enter the number: ");
    scanf("%lf",&b);
    double res=tan(b);
    printf("tan(%lf)=%.2lf\n",b,res);
}
