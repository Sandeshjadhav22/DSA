https://www.youtube.com/watch?v=6zhGS79oQ4k&list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&index=45


int searchInsert(vector<int>& arr, int m)
{

    int n =arr.size();
    int low = 0, high = n-1;
    int ans = n;

    while (low <= high)
    {
    int mid = (low + high)/2;

    if(arr[mid] >= m){
        ans =mid;
        high = mid-1;
    }
    else{
        low = mid+1;
    }
    }
    return ans;
}