#include <stdio.h>
int main() {
int d;
double r;
while(1) {
  printf("1) м^2 -> фут^2\t2) км^2 -> миля^2\t3) га -> акр\t4) см^2 -> дюйм^2\t5) выход\n");
  if (scanf("%d", &d) != 1) {
      printf("Ошибка\n");
      while (getchar() != '\n') {
        }
      continue;
    }
  else if (d < 1 || d > 5) {
    printf("Ошибка\n");
    continue;
  }
  else if (d == 5) {
    break;
  }
while (1) {
  if (scanf("%lf", &r) != 1) {
      printf("Ошибка\n");
      while (getchar() != '\n') {
        }
      continue;
    }
  else if (r == 0) {
    break;
  }
    switch(d) {
    case 1:
      printf("%lf футов^2\n", r * 10.764);
      break;
    case 2:
      printf("%lf миль^2\n", r * 0.386102);
      break;
    case 3:
      printf("%lf акров\n", r * 2.47105);
      break;
    case 4:
      printf("%lf дюймов^2\n", r * 0.15500031);
      break;
    }
  }
}
return 0;
}
