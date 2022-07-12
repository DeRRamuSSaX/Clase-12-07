#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int sum;
  while (n > 0) {
    int num;
    scanf("%d", &num);
    printf("%d\n", sum = num + num);
  }
  return 0;
}
