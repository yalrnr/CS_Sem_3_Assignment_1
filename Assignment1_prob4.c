#include<stdio.h>
#include<time.h>
void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void selectionSort(int arr[], int n){
    int i,j,key;
    for(i=0;i<n-1;++i){
        key=i;
        for(j=i+1;j<n;++j)
            if(arr[j]<arr[key])
            key=j;
            swap(&arr[key],&arr[i]);
        }
}
void bubbleSort(int arr[], int n){
    int i,j;
    for(i=0;i<n-1;++i){    
        for(j=0;j<n-i-1;++j){
            if (arr[j]>arr[j+1])
            swap(&arr[j], &arr[j+1]);
            }
        }
}
void calculation(int arr[],int n){
    clock_t startSelectionSort,endSelectionSort,startBubbleSort,endBubbleSort;
    long long int t_SelectionSort,t_BubbleSort;
    startSelectionSort=clock();
    selectionSort(arr, n);
    endSelectionSort=clock();
    startBubbleSort=clock();
    bubbleSort(arr, n);
    endBubbleSort=clock();
    t_SelectionSort=endSelectionSort-startSelectionSort;
    printf("Total clock ticks elapsed for Selection Sort : %lld\n", t_SelectionSort);//To get the time in second, divide t_SelectionSort by CLOCKS_PER_SEC
    t_BubbleSort=endBubbleSort-startBubbleSort;
    printf("Total clock ticks elapsed for Bubble Sort : %lld\n", t_BubbleSort);//To get the time in second, divide t_BubbleSort by CLOCKS_PER_SEC
}
int main(){
    int n; scanf("%d",&n);
    int arr[n],i,j; for(i=0;i<n;++i) scanf("%d",&arr[i]);
    calculation(arr,n);
    return 0;
}
/* 

              ---Analysis of two Algorithms for two cases---
              
              
Randomly Generated Input-
Input-
size=40 
Output-
Total clock ticks elapsed for Selection Sort : 6
Total clock ticks elapsed for Bubble Sort : 4

Input-
size=1000
Output-
Total clock ticks elapsed for Selection Sort : 1791
Total clock ticks elapsed for Bubble Sort : 1860

Input-
size=5,000
Output-
Total clock ticks elapsed for Selection Sort : 40280
Total clock ticks elapsed for Bubble Sort : 42650

Input-
size=10,000
Output-
Total clock ticks elapsed for Selection Sort : 186630
Total clock ticks elapsed for Bubble Sort : 202163

*/
/*
Already Sorted Input-

Input-
size=40 
Output-
Total clock ticks elapsed for Selection Sort : 6
Total clock ticks elapsed for Bubble Sort : 4

Input-
size=1000
Output-
Total clock ticks elapsed for Selection Sort : 1657
Total clock ticks elapsed for Bubble Sort : 1771

Input-
size=5,000
Output-
Total clock ticks elapsed for Selection Sort : 36686
Total clock ticks elapsed for Bubble Sort : 34643

Input-
size=10,000
Output-
Total clock ticks elapsed for Selection Sort : 142821
Total clock ticks elapsed for Bubble Sort : 136249

//The data is following a pattern ,a general plot of their Time(for algorithms) vs Input data is  attached as a file.
//Among simple average-case O(n2) algorithms, Selection Sort almost always outperforms Bubble Sort. However when the array is sorted in
//ascending order, Bubble Sort runs at O(n), which is its best case while Selection sort at O(n^2). 
//While in case of sorted array of descending order, Bubble Sort perfoms n^2 operations, which is 
// its worst case, and thus takes much more time than Selection Sort.
//In case of unsorted array, Selection Sort performs less number of swaps than Bubble Sort.
// The fundamental reason for this behaviour is due to the fact that When using selecting sort it swaps n times at most while when using bubble sort, it swaps almost n*(n-1).

        For Bubble Sort                          For Selection Sort
      #Worst complexity: n^2                  #Worst complexity: n^2
      #Average complexity: n^2                #Average complexity: n^2
      #Best complexity: n                     #Best complexity: n^2     
      
//The bottom line is-
***For sorted array of ascending order, Bubble Sort is preferred since it takes less time-O(n) while in any other case, Selection Sort is preferred-(due to less no of swaps).
*/
