// { Driver Code Starts
//Initial Template for C

#include <stdio.h>

// } Driver Code Ends
//User function Template for C

void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}

int kthSmallest(int arr[], int l, int r, int k)
{
    mergeSort(arr, 0, r);
    return arr[k - 1];
}

// { Driver Code Starts.

int main()
{
    int test_case;
    scanf("%d", &test_case);
    while (test_case--)
    {
        int number_of_elements;
        scanf("%d", &number_of_elements);
        int a[number_of_elements];

        for (int i = 0; i < number_of_elements; i++)
            scanf("%d", &a[i]);

        int k;
        scanf("%d", &k);
        printf("%d", kthSmallest(a, 0, number_of_elements - 1, k));
        printf("\n");
    }
    return 0;
} // } Driver Code Ends