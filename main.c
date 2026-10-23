#include <stdio.h>

int main() {
 long long k;
    scanf("%lld", &k);
    long long tong_tien = 0; 
    if (k <= 50) {
        tong_tien = k * 1678;
        k = 0; 
    } else {
        tong_tien = 50 * 1678;
        k = k - 50; 
    if (k > 0) {
        if (k <= 50) {
            tong_tien = tong_tien + k * 1734;
            k = 0;
        } else {
            tong_tien = tong_tien + 50 * 1734;
            k = k - 50;
        }
    }  
    printf("%lld\n", tong_tien);
    }
  
  return 0;
}