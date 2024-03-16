    sort(v.begin(), v.end());

    if (v.size() == 2)
    {
        ans = v[0];
    }
    else
    {
        if (freq[v[0]] > 1)
        {

            ans = 2 * v[0];
        }
        else
        {

            ans = v[0] + v[1];
        }
    }