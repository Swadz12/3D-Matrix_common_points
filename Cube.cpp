//Swadz12
#include "figure_types.h"
using namespace std;
long long Cube(int l, int v, int p, int h, int w, int d){
    int level2;
    if(l > middle){
        level2 = l - h;
    }else{
        level2 = l + h;
    }
    int vertical2;
    if(v > middle){
        vertical2 = v - w;
    }else{
        vertical2 = v + w;
    }
    int panel2;
    if(p > middle){
        panel2 = p-d;
    }else{
        panel2 = p+d;
    }
    long long sum =0;
    for(int i = min(l, level2); i <= max(l, level2); i++){
        for(int j = min(v, vertical2); j <= max(v, vertical2); j++){
            for(int k = min(p,panel2);k<=max(p,panel2);k++ ){
                if(i > globalSize || j > globalSize || k > globalSize || i < 0 || j < 0 || k < 0){
                    continue;
                }
                else{
                    sum+=cube[i][j][k];
                }
            }

        }
    }
    return sum;
}