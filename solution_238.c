
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *returnArr = (int *)malloc(sizeof(int)*numsSize),
        all=1,temp=1;
        for(int i = 0;i<numsSize;i++){
            all *= nums[i];
        }
        for(int i = 0;i<numsSize;i++){
            if(nums[i]==0){//recalculate
                for(int j=0;j<i;j++){
                    temp *= nums[j];
                 }
                for(int k=i+1;k<numsSize;k++){
                    temp *= nums[k];
                }
                 returnArr[i]=temp;
                temp =1;
            }
            else{
                returnArr[i] = all/nums[i];
            }
        }
        *returnSize=numsSize;
        return returnArr;

}


/* SOLUTION 2
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *returnArr = (int *)malloc(sizeof(int)*numsSize),
        temp=1;
    for(int i = 0;i<numsSize;i++){
        for(int j=0;j<i;j++){
            temp *= nums[j];
        }
        for(int k=i+1;k<numsSize;k++){
            temp *= nums[k];
        }
        returnArr[i]=temp;
        temp =1;
    }
    *returnSize=numsSize;
    return returnArr;
}

*/