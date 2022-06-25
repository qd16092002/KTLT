#include <stdio.h>
#include <stdlib.h>
int *a;
int n, tmp;
int main()
{
    // Tran Quang Dao- 20200128
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n);// Cap phat bo nho
    for (int i = 0; i < n; i++)
        scanf("%d", a + i);// nhan cac phan tu vao
    printf("The input array is: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");
    // Sort array
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(a + j) < *(a + i))
            {
                tmp = *(a + i);
                *(a + i) = *(a + j);// dao vi tri cac con tro
                *(a + j) = tmp;
            }
        }
    }// Tran Quang Dao- 20200128
    printf("The sorted array is: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");

    free(a);
    return 0;
}