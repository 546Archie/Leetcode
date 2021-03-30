#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* distributeCandies(int candies, int num_people, int* returnSize){
    int current = 1;
    int* ans;
    ans = (int*)malloc(num_people*sizeof(int));
    
    for(int i = 0 ; i < num_people ; i++){
        ans[i] = 0;
    }
    *returnSize = num_people;
    int index = 0, app = 0;
    while(candies-app > 0){
        if(current > candies-app)
            ans[index%num_people] += candies - app;
        else
            ans[index%num_people]+=current;
        app += current;
        current++;
        index++;
    }
    return ans;
}
