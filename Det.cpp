//Swadz12
#include "figure_types.h"
long long det(long long matrix[][32], int sizeM){
    if(sizeM<=0){
        return 0;
    }
    int ct2;
    long long sign = 1;
    long long determinant = 1;
    for (int k = 0; k < sizeM - 1; k++) {
        ct2 = k;
        while (ct2 < sizeM && matrix[ct2][k] == 0) {
            ct2++;
        }
        if(ct2 == sizeM){
            return 0;
        }
        if (ct2 > k) {
            for (int j = 0; j < sizeM; j++) {
                long long temp = matrix[k][j];
                matrix[k][j] = matrix[ct2][j];
                matrix[ct2][j] = temp;
            }
            sign *= -1;
        }
        for (int i = k + 1; i < sizeM; i++) {
            for (int j = k + 1; j < sizeM; j++) {
                matrix[i][j] = (matrix[k][k] * matrix[i][j] - matrix[i][k] * matrix[k][j]);
                if (determinant!=0){
                    matrix[i][j] /= determinant;
                }
            }
        }
        determinant = matrix[k][k];
    }

    return sign * matrix[sizeM - 1][sizeM - 1];
}