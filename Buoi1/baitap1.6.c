void reversearray(int arr[], int size){//Dung chi so

    int l = 0, r = size - 1, tmp;
// Tran Quang Dao - 20200128

    /*****************/

     while(l<r){
        tmp = arr[l];
        arr[l] = arr[r];
        arr[r] = tmp;
        l++;
        r--;
    }
    /*****************/
// Tran Quang Dao - 20200128
}



void ptr_reversearray(int *arr, int size){// Dung con tro

    int l = 0, r = size - 1, tmp;

    /*****************/
//Tran Quang Dao - 20200128
 while(l<r){
        tmp = arr[l];
        arr[l] = arr[r];
        arr[r] = tmp;
        l++;
        r--;
    }

    /*****************/

}