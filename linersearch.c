#include<stdio.h>

int linearSearch(const int arr[], int n, int target){
  for(int i = 0; i<= n; i++) {
      if(arr[i] == target) {
        return i;
      }
    }
  return -1;
}

int main() {
  int arr[] = {12, 7, 25, 9, 18};
  int n = (int)(sizeof(arr) / sizeof(arr[0]));
  int target = 9;
  int index = linearSearch(arr, n, target);

  if (index >=  0) {
    printf("%d found at index %d\n", target, index);
  } else {
    printf("%d not found\n", target);
  }
  return 0;
}
