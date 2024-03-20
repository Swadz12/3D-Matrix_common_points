//
// Created by swadz on 3.11.2023.
//
#ifndef FIGURE_TYPES_H
#define FIGURE_TYPES_H
#include <iostream>
#include <cmath>
using namespace std;
extern int globalSize;
extern long long cube[32][32][32];
extern int middle;
long long Cube(int l, int v, int p, int h, int w, int d);
long long Tetrahedron(int l, int v, int p, int e);
long long Octal(int l, int v, int p, int r);
long long det(long long matrix[][32], int sizeM);
#endif // FIGURE_TYPES_H
