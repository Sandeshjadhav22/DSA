video_link="https://www.youtube.com/watch?v=nhEMDKMB44g&list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&index=49"


int findMin(vector<int>& arr)
{

  int low = 0, high = arr.size() - 1;
  int ans = INIT_MAX;

  while(low <= high){
    int mid = (low + high)/2;

    if(arr[low] <= arr[high]){
        ans = min(ans,arr[low]);
        low = mid + 1;
    }
    else{
        high = mid -1;
        ans= min(ans,arr[mid]);
    }
  }   
  return ans;
}