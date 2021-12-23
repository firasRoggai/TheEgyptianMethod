#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int a,b,counter1,counter2;
counter1 = 0;
counter2 = 0;
printf("Enter A and B :\n");
scanf("%d",&a);
scanf("%d",&b);
if (ceil(log2(b) == floor(log2(b)))){ // to ckeck if B is a power of 2.
    while (b != 1){
    a = a * 2;
    b = b/2;
}
}
else if(b == 0){
    printf("0"); // a * 0 = 0
}
else {
    printf("b is not power of 2\n");
    while (ceil(log2(b) != floor(log2(b)))){
        b = b - 1;
        counter1++;
    }
    printf("B is %d \n",b);
    printf("counter 1 is: %d\n",counter1);
    printf("counter 2 is :%d",counter2);
}
    return 0;
}
