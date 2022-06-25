# include <stdio.h>
int main(){
  // Tran Quang Dao - 20200128
    int x, y, z;// khai bao 3 bien kieu du lieu int
    int* ptr;// khai bao kieu du lieu cua con tro
    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("\nThe three integers are:\n");
    ptr = &x;// cho con tro tro den bien x
    printf("x = %d\n", *ptr);
   /*****************/
   //Tran Quang Dao - 20200128
    ptr = &y;// cho con tro tro den bien y
    printf("y = %d\n", *ptr);
    ptr = &z;// cho con tro tro den bien z
    printf("z = %d", *ptr);
    /*************/
    return 0;
}