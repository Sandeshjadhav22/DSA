// Brute

for (int i = 0; i < n; i++)
{
    int leader = true;

    for (int j = i + 1; j < n; j++)
    {
        if (a[j] > a[i])
        {
            leader = false;
            break;
        }
    }
}

// optimal

vector<int> superiorElements(vector<int> &a)
{
    vector<int> ans;

    int Maxi = 0;
    int n = a.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > Maxi)
        {
            ans.push_back(a[i]);
        }
        Maxi = max(a[i], maxi);
    }

    sort(ans.begin(), ans.end());
    return ans;
}
