#include "stdlib.h"
#include "stdio.h"
#include "time.h"





double fun(int n){
  double a = 1.0;
 for (int i = 1; i <= n; i++) {

    a = a*i;
    printf("%.0f\n",a);
 }
};
int main(int argc, char const *argv[]) {
  double x = atoi(argv[1]);
  fun(x);

  return 0;
}
