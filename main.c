#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    while(i<=100){
        printf("%d ",i);
        i++;
    }
    return 0;


    int i=0'
    do{
        printf("%d ",i);
        i++;
    }while (i<=100);
    return 0;


    int i;
    for(i=0;i<=100;i++){
        printf("%d ",i);
    }
    return 0;


    int i,marks[10];
    int total = 0;
    float avg;

    printf("Enter 10 marks: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    avg=total/10;
    if (avg < 50) {
        printf("Fail!\n");
    } else {
        printf("Pass!\n");
    }

    return 0;


    int number;
    int i=1, fact=1;

    printf("Enter a number: ");
    scanf("%d",&number);

    while(i<=number){
        fact*=i;
        i++;
    }
    printf("Factorial is %d",fact);


    int number, total=0, reminder;
    printf("Enter number: ");
    scanf("%d",&number);

    while(number!=0){
        reminder=number%10;
        total+=reminder;
        number=number/10;
    }
    printf("The output is %d",total);


    int n;
    int r=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        r= r*10+n%10;
        n /= 10;
    } while (n > 0);

    printf("Reversed: %d\n",r);





}
