//Swadz12
#include "figure_types.h"
using namespace std;
long long Tetrahedron(int l, int v, int p, int e){
    int level2;
    if(l >= middle){
        level2 = l - e;
    }
    else{
        level2 = l + e;
    }
    int vertical2;
    if(v >= middle){
        vertical2 = v - e;
    }else{
        vertical2 = v + e;
    }
    int panel2;
    if(p >= middle){
        panel2 = p-e;
    }else{
        panel2 = p+e;
    }
    long long sum=0;
    int x,y,z;
    for(int i = min(l, level2); i <= max(l, level2); i++ ){
        for(int j = min(v, vertical2); j <= max(v, vertical2); j++ ){
            for(int k = min(p,panel2);k<=max(p,panel2);k++ ){
                if(i > globalSize || j > globalSize || k > globalSize || i < 0 || j < 0 || k < 0) {
                    continue;
                }
                else{
                    if(abs(i - l)+abs(j - v)+abs(k - p)<=e){
                        sum+=cube[i][j][k];
                    }
                }

            }

        }
    }
    return sum;
}