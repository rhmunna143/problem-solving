sort(all(a)); // ascending

sort(a.rbegin(), a.rend()); // descending

// custom sort
sort(all(a), [](int x, int y)
     { return x > y; });