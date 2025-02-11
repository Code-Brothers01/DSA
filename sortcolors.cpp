class Solution {
public:
    void sortColors(vector<int>& nums) {
    //#1 counting sort
        // int count0 = 0,count1 = 0,count2 = 0;
        // for(int i = 0;i < nums.size();i++){
        //     if(nums[i] == 0){
        //         count0++;
        //     }else if(nums[i] == 1){
        //         count1++;
        //     }else{
        //         count2++;
        //     }
        // }
        // int index = 0;
        // while(count0--) nums[index++] = 0;
        // while(count1--) nums[index++] = 1;
        // while(count2--) nums[index++] = 2;
    // #2 dutch national flag algorithm
        int mid = 0,high = nums.size()-1,low = 0;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }else if(nums[mid] == 1){
                mid++;
            }else{
                swap(nums[high],nums[mid]);
                high--;
            }
        }
    }
};
