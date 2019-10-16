// we are using merge sort//
#include<stdio.h> 
int y;// y is used to count number of merges//
void merge(long long int array[], int left, int middle, int right)// declaring merge function// 
{ 
    int a = 0;
    int b = 0;
    int c;
    int t1 = middle - left + 1;// we are dividing into two parts// 
    int t2 =  right - middle;       
    long long int L[t1];
    long long int R[t2]; 
    while (a<t1)    // we are putting elements in left array//
    {
        L[a] = array[left + a]; 
        a++;
    }
    while (b<t2) // we are putting elements in right array//
    { 
        R[b] = array[middle + 1+ b];
        b++;
    } 
    a=0, b=0, c = left; 
    while (a < t1 && b < t2) // comparing elements and putting in ssorted array//
    { 
        if (L[a] <= R[b]) 
        { 
            array[c] = L[a]; 
            a++; 
        } 
        else
        { 
            array[c] = R[b]; 
            b++; 
        } 
        c++; 
    } 
    while (a<t1) 
    { 
        array[c] = L[a]; 
        a++; 
        c++; 
    } 
    while (b<t2) 
    { 
        array[c] = R[b]; 
        b++; 
        c++; 
    } 
} 
void mergesort(long long int array[], int left, int right) // defining mergesort//
{ 
    if (right > left) 
    { 
        int middle = left+(right-left)/2; 
        mergesort(array, left, middle); 
        mergesort(array, middle+1, right);
        y++;	
        merge(array, left, middle, right); // calling on merge function//
    } 
} 
int main(void) 
{ 
    int n, i;
    scanf("%d", &n);// taking the number of elements//
    int x;
    long long int array[n];
    for(x = 0; x<n; x++) // taking the array//
    {
	   scanf("%lld,", &array[x]);
    } 
    int arraysize = n; 
    mergesort(array, 0, arraysize - 1); //calling mergesort//
    for(i = 0; i<n; i++)
    {
        printf("%lld ", array[i]);
    } 
    printf("\n%d", y); // printing the number of merges//
}

