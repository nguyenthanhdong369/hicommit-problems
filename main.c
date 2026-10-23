#include <stdio.h>

int main() {
  int k, h;
 long long k;
    scanf("%lld", &k);
    long long tong_tien = 0; 
    if (k <= 50) {
        tong_tien = k * 1678;
        k = 0; 
    } else {
        tong_tien = 50 * 1678;
        k = k - 50; 
    }
  return 0;
}