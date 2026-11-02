#include <stdio.h>
#include <ctype.h>
int main() {
int c;
int i = 0;
int d;
while((c = getchar()) != '#') {
  if(d == 'e' && c == 'i') {
    i++;
  }
  d = c;
}
printf("%d\n", i);
return 0;
}
