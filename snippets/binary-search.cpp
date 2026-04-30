int binarySearch(vector<int> &a, int x)
{
    int l = 0, r = a.size() - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
            return mid;
        else if (a[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    
    return -1;
}