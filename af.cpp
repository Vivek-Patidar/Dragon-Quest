bool canSortArray(vector<int> &nums)
{
    int n = nums.size();
    map<int, int> m;
    bool mark = false;
    for (int i =0; i< n; i++)
    {
        int temp = nums[i];
        if (m.find(temp) != m.end())
            continue;
        while (num)
        {
            if (temp & 1)
                m[nums[i]]++;
            temp = temp >> 1;
        }
    }

    while (true)
    {
        mark = false;

        for (int i = 0; i <n-1;)
        {
            if (nums[i + 1] < nums[i])
            {
                if (m[nums[i]] == m[nums[i + 1]])
                {
                    swap(nums[i], nums[i + 1]);
                    mark = true;
                }
                else
                    return false;
            }
            i=i+1;
        }

        if (mark == false)
            break;
    }

    return true;
}
int gcd(int a, int b)
{
    while(b)
    {
        a= a % b;
        swap(a,b);
    }
    return a;
}