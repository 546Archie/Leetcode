/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* n, int numbersSize, int target, int* returnSize){
    int* ret = malloc(sizeof(int)*2);
    int l, r;
    l = 0, r = numbersSize-1;
    *returnSize = 2;
    while(l < r){
        if(n[l]+n[r] == target){
            ret[0] = l+1;
            ret[1] = r+1;
            return ret;
        }
        else if(n[l]+n[r] > target){
            r--;
        }
        else{
            l++;
        }
    }
    return ret;
}
