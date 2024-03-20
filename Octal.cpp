//Swadz12
#include "figure_types.h"
using namespace std;
long long Octal(int l, int v, int p, int r){
    int level2;
    if(l >= middle){
        level2 = l - r;
    }else{
        level2 = l + r;
    }
    int vertical2;
    if(v >= middle){
        vertical2 = v - r;
    }else{
        vertical2 = v + r;
    }
    int panel2;
    if(p >= middle){
        panel2 = p-r;
    }else{
        panel2 = p+r;
    }
    long long sum=0;
    for(int i = min(l, level2); i <= max(l, level2); i++ ){
        for(int j = min(v, vertical2); j <= max(v, vertical2); j++ ){
            for(int k = min(p,panel2);k<=max(p,panel2);k++ ){
                if(i > globalSize || j > globalSize || k > globalSize || i < 0 || j < 0 || k < 0) {
                    continue;
                }
                else{
                    if(abs(i - l)*abs(i - l) + abs(j - v)*abs(j - v) + abs(k - p)*abs(k - p) <= r*r){
                        sum+=cube[i][j][k];
                    }
                }

            }

        }
    }
    return sum;
}