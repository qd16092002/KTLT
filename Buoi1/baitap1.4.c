int counteven(int* arr, int size){
        int count =0;
   // Tran Quang Dao - 20200128  
        /*************/
        for(int i=0; i<size; i++){// 
        if(arr[i]%2==0)
        count++;// neu arr[i]chia het cho 2 thi tang count them 1 
    }
        /************/
    return count;
    }  
