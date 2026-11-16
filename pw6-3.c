#include <stdio.h>
int main() {
int i = 0;
float c = 0.0;
float c1 = 0.0;
int i1 = 0;
int n;
int s;
while(1) {
int a = scanf("%d", &n);
  if (a != 1) {
    while ((n = getchar()) != '\n') {
    }
    continue;
  }
  else if (n == 0) {
    break;
  }
  s = n;
  if (n > 0) {
    while(s >= 10) {
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
  }
  if (n < 0) {
    while(s <= -10) {
      s = s / 10;
    }
    if(s < (n % 10)) {
      c += n;
      i++;
    }
    else if(s > (n % 10)) {
      c1 += n;
      i1++;
    }
}
}
if (i != 0) {
  printf("Первое больше: %d\tСреднее арифметическое: %.2f\n", i, (float)c/i);
}
else {
  printf("Первое больше: 0\tСреднее арифметическое: 0\n");
}
if (i1 != 0) {
  printf("Последнее больше: %d\tСреднее арифметическое: %.2f\n", i1, (float)c1/i1);
}
else {
  printf("Последнее больше: 0\tСреднее арифметическое: 0\n");
}
return 0;
}
