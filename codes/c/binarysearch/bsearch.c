#include <stdio.h>

void main()
{
  int i, beg, end, mid, n, search, arr[10];
  printf("Enter number of elements: ");
  scanf("%d", &n);
  printf("Enter %d Elements: ", n);
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  printf("Enter value to find: ");
  scanf("%d", &search);

  beg = 0;
  end = n - 1;
  mid = (beg+end)/2;

  while (beg <= end) {
    if (arr[mid] < search)
      beg = mid + 1;
    else if (arr[mid] == search) {
      printf("%d found at location %d.\n", search, mid+1);
      break;
    }
    else
      end = mid - 1;

    mid = (beg + end)/2;
  }
  if (beg > end)
    printf("Not found! %d isn't present in the Array.\n", search);
}