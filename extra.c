void quickSort(int *arr, int low, int high)
{
    int f = 1;
    int temp;
    int i = low, j = high + 1;
    int key = arr[low];
    if (low < high)
    {
        while (f)
        {
            i++;
            while (key > arr[i] && i < high)
            {
                i++;
            }
            j--;
            while (key < arr[j])
            {
                j--;
            }

            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            else
            {
                f = 0;
            }
        }
        temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;

        quickSort(arr, low, j - 1);
        quickSort(arr, j + 1, high);
    }
}

bool checkArr(int *arr, int n)
{
    bool check = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            check = false;
            break;
        }
    }

    return check;
}

int maxSubarrayLength(int *nums, int numsSize, int k)
{
    int n = numsSize;
    if (checkArr(nums, n))
        return k;

    int max = nums[0];
    for (int i = 0; i < n; i++)
    {
        if (max < nums[i])
            max = nums[i];
    }
    int ans = n;

    if (max > 100)
    {
        int temp[n];
        for (int i = 0; i < n; i++)
        {
            temp[i] = nums[i];
        }

        quickSort(temp, 0, n - 1);

        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (temp[i] == temp[i + 1])
            {
                count++;
                if (count > k)
                    break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == nums[0])
            {
                count--;
                if (count == 0)
                {
                    ans = i;
                }
            }
        }
    }
    else
    {
        int frq[max];
        for (int i = 0; i < max; i++)
        {
            frq[i] = 0;
        }

        int ans = n;
        for (int i = 0; i < n; i++)
        {
            printf("%d -> %d, ", nums[i], frq[nums[i] - 1]);
            frq[nums[i] - 1]++;
            printf("%d -> %d, \n", nums[i], frq[nums[i] - 1]);
            if (frq[nums[i] - 1] > k)
            {
                ans = i;
                break;
            }
        }
    }

    return ans;
}