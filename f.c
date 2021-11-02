#include "stdlib.h"
#include "stdio.h"
#include "math.h"
#include "string.h"
#include "time.h"

void print_array(int array[], int dimension) {
  for (int i = 0; i < dimension; i++) {
     printf("%d\n",array[i] );
  }
}

int main(void) {
  int array[] = {1,2,3,4,5,6};
  print_array(array,6);

  return 0;


}
