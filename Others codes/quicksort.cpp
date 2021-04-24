/**#include<bits/stdc++.h>
using namespace std;
int a[100];int i,j,n;
void quicks(int f,int l)
{
    int i,j;
    if(f<l)
    {
        i=f+1;
        j=l;
        while(a[f]>a[i]&&i<n)///akhane pivot first number
        {
            i++;
        }
        while(a[f]<a[j])
        {
            j--;
        }
        while(i<j)
        {
            swap(a[i],a[j]);
            while(a[f]>a[i])
            {
                i++;
            }
            while(a[f]<a[j])
            {
                j--;
            }
        }

        swap(a[j],a[f]);
        quicks(f,j-1);
        quicks(j+1,l);
    }
}
int main()
{

    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);}

        quicks(0,n-1);
        for(i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }

    return 0;
}***/

#include<bits/stdc++.h>
using namespace std;
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("n");
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: n");
    printArray(arr, n);
    return 0;
}
