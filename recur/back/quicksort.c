#include <stdio.h>

void quickSort(int arr[], int L, int R) {
      int left = L, right = R;
      int pivot = arr[(L + R) / 2];    // pivot 설정 (가운데) 
      int temp;
      do
      {
        while (arr[left] < pivot)    // left가 pivot보다 큰 값을 만나거나 pivot을 만날 때까지 
            left++;
        while (arr[right] > pivot)    // right가 pivot보다 작은 값을 만나거나 pivot을 만날 때까지 
            right--;
        if (left<= right)    // left가 right보다 왼쪽에 있다면 교환 
        {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            /*left 오른쪽으로 한칸, right 왼쪽으로 한칸 이동*/
            left++;
            right--;
        }
      } while (left<= right);    // left가 right 보다 오른쪽에 있을 때까지 반복 
 
    /* recursion */
    if (L < right)
        quickSort(arr, L, right);    // 왼쪽 배열 재귀적으로 반복 
 
    if (left < R)
        quickSort(arr, left, R);    // 오른쪽 배열 재귀적으로 반복 
}
 
int main(){
    int i;

    int arr[100];
    scanf("%d",&i);

    for(int j=0; j<i; j++){
        scanf("%d", &arr[j]);
    }

    for(int j=0; j<i; j++){
        printf("%d ",arr[j]);
    }

    quickSort(arr,0,i-1);
    printf("\n");

    for(int j=0; j<i; j++){
        printf("%d ",arr[j]);
    }


  return 0; 
}
