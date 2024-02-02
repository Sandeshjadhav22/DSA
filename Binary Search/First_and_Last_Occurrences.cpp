https://www.youtube.com/watch?v=hjR1IYVx9lY&list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&index=46

//with lower bound and upper bound

int lowerBound(vector<int> arr, int n, int x){
    int low = 0, high = n-1;
    int ans = n;

    while(low <= high){
        int mid = (low + high)/2;

      if(arr[mid] >= x){
        ans= mid;
        high = mid-1;
      }
      else{
        low = mid+1;
      }

    }
    return ans;
}

int upperBound(vector<int> &arr, int n, int x){

    int low =0 , high = n -1;
    int ans = n;

    while(low <= high){
        int mid = ( low + high)/2;

        if(arr[mid] > x){
            ans=mid;
            high = mid -1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int lb = lowerBound(arr, n, k);
    if(lb == n || arr[lb] != k) return {-1,-1};
    return {lb, upperBound(arr, n,k)-1};
}



/// with help of Binary search

int fo(vector<int> arr, int n, int k){
    int low = 0, high = n-1;
    int first = -1;

    while(low <= high){
        int mid = (low + high)/2;

      if(arr[mid] == k){
        first = mid;
        high = mid-1;
      }
      else if(arr[mid] < k) low = mid +1;    
      else high = mid -1;

    }
    return first;
}

int lo(vector<int> &arr, int n, int k){

    int low =0 , high = n -1;
    int last = -1;

    while(low <= high){
        int mid = ( low + high)/2;

        if(arr[mid] == k){
            last = mid;
            low = mid +1;
        }
        else if(arr[mid] < k ) low = mid + 1;
        else high = mid -1;
    }
    return last;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
   int firstOcc = fo(arr,n,k);
   if(firstOcc == -1) return {-1,-1};
   int lastOcc = lo(arr,n,k);
   return {firstOcc,lastOcc};
}


// search in rotated sorted array 2

bool searchInARotatedSortedArrayII(vector<int>&arr, int k) {
      int n = arr.size();
      int low = 0, high = n-1;

      while(low <= high){
          int mid = (low + high)/2;

          if(arr[mid] == k) return true;
          if(arr[low] == arr[mid] && arr[mid] == arr[high]){
              low++, high--;
              continue;
          }

          if(arr[low] <= arr[mid]){
              if(arr[low] <= k && k<= arr[mid]){
                  high = mid - 1;
              }
              else{
                  low = mid +1;
              }
          }else{
              if(arr[mid] <= k && k <= arr[high] ){
                  low = mid +1;
              }else{
                  high = mid -1;
              }
          }
      }
      return false;
}

