#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int a,b,counter1,counter2;
printf("Enter A and B :\n");
scanf("%d",&a);
scanf("%d",&b);
if (ceil(log2(b) == floor(log2(b)))){ // to ckeck if B is a power of 2.
    while (b != 1){
    printf("%d x 2 = %d \n",a,a*2);
    a = a * 2;
    b = b/2;
}
printf("The result is :%d",a);
}
else if(b == 0){
    printf("0"); // a * 0 = 0
}
else {
    printf("b is not power of 2");
    while (ceil(log2(b) != floor(log2(b)))){
        b -= 1;
        counter1++;
    }
    if ((ceil(log2(counter1) != floor(log2(counter1))))){
        counter1 -=1;
        counter2++;
    }
    else{
        printf("B is %d",b);
        printf("counter 1 is: %d",counter1);
        printf("counter 2 is :%d",counter2);
    }
}

    return 0;
}
