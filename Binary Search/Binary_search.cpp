video_link= "https://www.youtube.com/watch?v=MHf6awe89xw&list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&index=44"

//itrative Code
int search(vector<int> &nums, int target){
    int n = nums.size();
    int low = 0, high = n-1;

    while(low <= high){
        int mid = (low + high)/2;

        if(target == nums[mid]) return mid;
        else if( target > nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
    }

    // Recursive Code

  
     int bs(vector<int>&nums, low, high, target){
        if(low > high) return -1;
        int mid = (low + high)/2;
        if(target == nums[mid]) return mid;
        else if(target > nums[mid]) return bs(nums,mid+1, high, target);
        return bs(nums, low, mid-1,  target);
     }

    int search(vector<int> &nums, int target){
     return bs(nums, 0, nums.size()-1, target)
    }