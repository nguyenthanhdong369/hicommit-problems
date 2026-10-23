#include <stdio.h>

int main() {
    long long k;
    if (scanf("%lld", &k) != 1) return 0;

    long long tong_tien = 0;

    if (k <= 50) {
        tong_tien = k * 1678;
    } 
    else {
        tong_tien = 50 * 1678;
        
        if (k <= 100) {
            tong_tien = tong_tien + (k - 50) * 1734;
        } 
        else {
            tong_tien = tong_tien + 50 * 1734;
            
            if (k <= 200) {
                tong_tien = tong_tien + (k - 100) * 2014;
            } 
            else {
                tong_tien = tong_tien + 100 * 2014;
                
                if (k <= 300) {
                    tong_tien = tong_tien + (k - 200) * 2536;
                } 
                else {
                    tong_tien = tong_tien + 100 * 2536;
                    
                    if (k <= 400) {
                        tong_tien = tong_tien + (k - 300) * 2834;
                    } 
                    else {
                        tong_tien = tong_tien + 100 * 2834 + (k - 400) * 2927;
                    }
                }
            }
        }
    }

    printf("%lld\n", tong_tien);

    return 0;
}