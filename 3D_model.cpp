//Swadz12
#include "figure_types.h"
int globalSize = 0;
long long cube[32][32][32];
int middle = 0;
int main(){
    cin>>globalSize;
    char task='X';
    cin >> globalSize;
    middle = globalSize / 2;
    for (int i = 0; i < globalSize; i++) {
        for (int j = 0; j < globalSize; j++) {
            for (int k = 0; k < globalSize; k++) {
                cin >> cube[j][k][i]; //1 0 0
            }
        }
    }
    int sizeM = globalSize;
    while(task != 'E'){
        cin >> task;
        if(task == 'C'){
            int l,v,p,h,w,d;
            cin>>l>>v>>p>>h>>w>>d;
            cout << Cube(l, v, p, h, w, d) << endl;
        }
        if(task == 'T'){
            int l,v,p,e;
            cin>>l>>v>>p>>e;
            cout << Tetrahedron(l, v, p, e) << endl;
        }
        if(task == 'O'){
            int l,v,p,r;
            cin>>l>>v>>p>>r;
            cout << Octal(l, v, p, r) << endl;
        }
        if(task == 'D'){
            long long matrix[32][32];
            int i;
            char k;
            cin >>k>>i;
            if(k == 'l'){
                for(int m =0; m < globalSize; m++){
                    for(int s = 0; s < globalSize; s++){
                        matrix[m][s]=cube[i][m][s];
                    }
                }
                cout<<det(matrix,sizeM)<<endl;
            }
            else if(k == 'p'){
                for(int m =0; m < globalSize; m++){
                    for(int s = 0; s < globalSize; s++){
                        matrix[m][s]=cube[m][s][i];
                    }
                }
                cout<<det(matrix,sizeM)<<endl;
            }
            else if(k == 'v'){
                for(int m =0; m < globalSize; m++){
                    for(int s = 0; s < globalSize; s++){
                        matrix[m][s]=cube[m][i][s];
                    }
                }
                cout<<det(matrix,sizeM)<<endl;
            }
        }
    }
    return 0;
}