#include <stdio.h>

void allocate_mem(int ***mt, int m, int n){
    //#Allocate memory for the matrix
// Tran Quang Dao - 20200128
    /*****************/
    
    *mt = new int *[m];
    for(int i=0; i<m; i++){// Phan bo bo nho cho ma tran
        (*mt)[i] = new int[n];
    }
    /*****************/
}
// Tran Quang Dao - 20200128

void input(int **mt, int m, int n){
    //#Input elements of the matrix

    /*****************/
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++){
            printf("mt[%d][%d] = ",i,j);// Nhap dau vao cho ma tran
            scanf("%d",&mt[i][j]);
        }
    /*****************/
}

void output(int **mt, int m, int n){
    //# Print all elements of the matrix

    /******************/
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            printf("%d ",mt[i][j]);// in cac phan tu cua ma tran
        printf("\n");
    }
    /*****************/

}

int process(int **mt, int m, int n){
    int tong = 0;
    //# Calculate the sum of all even elements in the matrix
// Tran Quang Dao 20200128
    /******************/
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++){
            if(mt[i][j]%2==0)// kiem tra co phai la so chan hay khong
                tong += mt[i][j];// cong cac phan tu chan 
        }
    /*****************/

    return tong;
}

void free_mem(int **mt, int m, int n){
    //# Free memory

    /******************/
    for(int i=0; i<m; i++)
        delete []mt[i];// Giai phòng bo nho
    delete []mt;
    /*****************/
}

int main(){
    int m, n, **mt;
    printf("Enter m, n = ");
    scanf("%d%d", &m, &n);
    allocate_mem(&mt, m, n);
    input(mt, m, n);
    output(mt, m, n);
    printf("The sum of all even elements is %d", process(mt, m, n));
    free_mem(mt, m, n);
    return 0;
}