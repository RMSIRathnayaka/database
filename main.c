#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%2==0){
        printf("%d is an even number.\n",a);
    }else {
        printf("%d is a odd number.\n",a);
    }
    printf("\n");

    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    switch(a%2)
    {
        case 0:printf("%d is an even number\n",a);break;
        case 1:printf("%d is a odd number\n",a);break;
    }
    return 0;

    int n1,n2;
    char o;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);

    printf("Enter the operator:");
    scanf("%c",&o);

    switch(o)
    {
    case '+':printf("Addition = %d\n",n1+n2);break;
    case '-':printf("Subtraction = %d\n",n1-n2);break;
    case '*':printf("Multiplication = %d\n",n1*n2);break;
    case '/':printf("Division = %d\n",n1/n2);break;
    default:printf("Invalid Operator\n");
    }
    return 0;

    int choice;
    float r,d,c,a;
    printf("Menu driven calculator\n");

    printf("Enter the radius of the circle");
    scanf("%f",&r);

    printf("Selection a calculation");
    printf("1.Calculate diameter\n");
    printf("2.Calculate circumference\n");
    printf("3.Calculate area\n");

    printf("Enter your choice(1-3):");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("Result-%.2f\n",2*r);break;
        case 2:printf("Result-%.2f\n",2*PI*r);break;
        case 3:printf("Result-%.2f\n",PI*r*r);break;
        default:printf("Invalid choice\n");
    }
    return 0;


    char x;
    printf("Enter a character: ");
    scanf("%c",&x);
    switch(x)
    {
    case 'a':printf("a is a vowel");break;
    case 'e':printf("e is a vowel");break;
    case 'i':printf("i is a vowel");break;
    case 'o':printf("o is a vowel");break;
    case 'u':printf("u is a vowel");break;
    default:printf("%c is not a vowel \n",x);
    }

}
