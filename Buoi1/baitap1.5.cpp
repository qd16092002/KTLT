#include<bits/stdc++.h>
using namespace std;
double* maximum(double* a, int size){

    double *max;

    max = a;

    if (a==NULL) return NULL;

// Tran  Quang Dao 20200128

/*************/

   for(int i=1; i<size; i++){
        if(a[i] > *max) max = &a[i];// neu a[l] lon hon max thi gan max = a[i]
    }

/************/
    return max;

}
int main(){
    double arr[] = {2,4,9,6,7,8};
    cout << *maximum(arr,6);
    return 0;
}