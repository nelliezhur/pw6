#include <stdio.h>
int main() {
int i;
double c;
double c1;
int f = 0;
while(scanf("%d", &i) != 0 && i != 0) {
  f += i;
  if(f <= 2000) {
    c = f * 0.02;
  }
  else if(2000 < f && f <= 12000) {
    c1 = (2000 * 0.02) + (f - 2000) * 0.015;
  }
  else {
    c = (2000 * 0.02 + 10000 * 0.015 + (f - 12000) * 0.01);
    c1 = 0;
  }
}
printf("Запросов: %d\tСтоимость: %lf\n", f, c + c1);
return 0;
}
