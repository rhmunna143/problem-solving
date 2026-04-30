vector<ll> prefixSum(vector<int> &a)
{
    int n = a.size();

    vector<ll> pref(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + a[i];
    }

    return pref;
}