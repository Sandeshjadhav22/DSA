video link = "https://www.youtube.com/watch?v=Bsv3FPUX_BA&list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&index=53"

// find squart root 
//Brute force solution 
int floorSqrt(int n){
    int ans = 1;
    for( int i =1; i<=n; i++){
        if(i*i <= n){
            ans = i;
        }else{
            break;
        }
    }
    return ans;
}

// Binaryy searchh

int floorSqrt(int n){
    int low =1, high = n;

    while (low <= high)
    {
         long long mid = (low+high)/2;
         long long val = (mid*mid);
         if(val<=n){
            low = mid +1;
         }
         else{
            high= mid-1;
         }
    }
    return high;
}

