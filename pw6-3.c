#include <stdio.h>
int main() {
int i = 0;
int c = 0;
int c1 = 0;
int i1 = 0;
int n;
int s;
scanf("%d", &n);
while(n != 0) {
  int s = n;
  while(s > 10) {
    s = s / 10;
  }
  if(s > (n % 10)) {
    c += n;
    i++;
  }
  else if(s < (n % 10)) {
    c1 += n;
    i1++;
  }
  scanf("%d", &n);
}
printf("Первое больше: %d\tСреднее арифметическое: %.2f\n", i, (float)c/i);
printf("Последнее больше: %d\tСреднее арифметическое: %.2f\n", i1, (float)c1/i);
return 0;
}
