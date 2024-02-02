video link = "https://www.youtube.com/watch?v=jtSiWTPLwd0&list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&index=50"

    int
    findKRotation(vector<int> & arr)
{
    int low = 0, high = arr.size() - 1;
    int ans = INT_MAX;
    int index = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[low] <= arr[mid])
        {
            // ans=min(ans,arr[low]);
            if (arr[low] < ans)
            {
                index = low;
                ans = arr[low]
            }
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
            if (arr[mid] < ans)
            {
                index = mid;
                ans = arr[mid];
            }
        }
    }
}