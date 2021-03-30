/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int row, int* returnSize){
    int* arr = (int *)malloc(sizeof(int)*(row+1));
    arr[0] = 1;
    if(row==0){
        *returnSize = row+1;
        return arr;
    }
    int a = 0;
    int b = 1;
    for(int i = 1 ; i <= row ; i++){
        a = 0;
        b = 1;
        for(int j = 0 ; j < i ; j++){
            arr[j] = a + b;
            a = b;
            b = arr[j+1];
        }
        arr[i] = 1;
    }
    *returnSize = row+1;
    return arr;
}
