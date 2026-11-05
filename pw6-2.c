#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "ru_RU.UTF-8");
wchar_t n;
int i = 0;
wchar_t d;
while((n = getwchar()) !=  L'#') {
  if(n == L'й' && d == L'е') {
    i++;
  }
  d = n;
}
printf("%d\n", i);
return 0;
}
