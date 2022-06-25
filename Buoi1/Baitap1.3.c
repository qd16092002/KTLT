#include <stdio.h>

int main() {
//Tran Quang Dao - 20200128
    int x, y, z;// khai bien ba kieu du lieu 

    int *ptr;// khai bien con tro kieu du lieu

    scanf("%d %d %d", &x, &y, &z);

    printf("Here are the values of x, y, and z:\n");

    printf("%d %d %d\n", x, y, z);
    /*********************/
    ptr = &x;//cho con tro ptr tro vao bien x
    *ptr = *ptr+100;// tang gia tri bien x them 

    ptr = &y;
    *ptr = *ptr+100;

    ptr = &z;
    *ptr = *ptr+100;

  /**********************/
    printf("Once again, here are the values of x, y, and z:\n");

    printf("%d %d %d\n", x, y, z);
// Tran Quang Dao - 20200128
    return 0;

}   