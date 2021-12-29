// Code written by : Roggai Firas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int a,b,a1,a2,counter1,counter2;
printf("Enter A and B :\n");
scanf("%d",&a);
scanf("%d",&b);
a1 = a;
a2 = a;
counter1 = 0;
counter2 = 0;
if (ceil(log2(b) == floor(log2(b)))){
printf("====================\nB value  |  A value      \n");
// to ckeck if B is a power of 2.
    do {
    a = a * 2;
    b = b/2;
    printf("  %d          %d      \n",b,a);
    }
    while (b != 1);
printf("The result is :%d\n",a);
printf("====================\n");
}
else if(b == 0){
    printf("0"); // a * 0 = 0
}
else {
    printf("b is not power of 2 \n");
    while (ceil(log2(b) != floor(log2(b)))){// while b is not even
        b -= 1;
        counter1++;
    }
    // while the counter 1 is not power of two
    while ((ceil(log2(counter1) != floor(log2(counter1))))){
        counter1 -=1;
        counter2++;
    }
    printf("b = %d + %d + %d\n",b,counter1,counter2);
    printf("=======================================================\nB value  |  A value  |  number1 value |  number2 value\n");
    if( counter2 == 0){
    do {
    do{
    a = a*2;
    a1 = a1 * 2;
    b = b/2;
    counter1 = counter1/2;
    printf("  %d          %d            %d                 0      \n",b,a,a1);
    }
    while(counter1 != 1);
    a = a*2;
    b = b/2;
    printf("  %d          %d            %d                 0      \n",b,a,a1);
        }
    while (b != 1);
    printf("the answer is  %d",a+a1);
    }
    // in case counter2 > 0
    else {
        a = a*2;
        a1 = a1*2;
        counter1 = counter1/2;
        b = b/2;
        do{
        do{
                a = a*2;
                a1 = a1*2;
                counter1 = counter1/2;
                b = b/2;
                printf("  %d          %d            %d                 %d      \n",b,a,a1,a2);
        }
        while(counter1 != 1);
                a = a*2;
                b = b/2;
                printf("  %d          %d            %d                 %d      \n",b,a,a1,a2);
        }
        while (b != 1);
        printf("the result is :%d",a+a1+a2);
    }

}
return 0;
}

