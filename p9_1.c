#include <stdio.h>
#include<stdlib.h>

int main() {
    int n;
    int *ptr;
    int sum=0;
    int *ptr2;


    printf("Enter the number of elements: ");
    scanf("%d", &n);


    ptr = (int *)malloc(n * sizeof(int));
    ptr2 = (int *)malloc(n * sizeof(int));


    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    printf("Numbers entered by the user:\n");
    int i = 0;
    while (i < n) {
        printf("%d", *(ptr + i));
        i++;
    }
    printf("\n reverse:");
    for(i=n-1;i>=0;--i)
    {
        printf("%d",*(ptr+i));
    }

      for (int i = 0; i < n; i++) {
        sum += *(ptr+i);
    }
     printf("\n sum:%d",sum);

     for (int i = 0; i < n; i++) {
        ptr2[i]= *(ptr+i);
    }

         printf("\n copy:");

     for (int i = 0; i < n; i++) {
        printf("%d",*(ptr2+i));
    }
    free(ptr);

    return 0;
}

