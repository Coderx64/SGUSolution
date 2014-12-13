#pragma once
#include "stdafx.h"
#include <math.h>

const int M = 3;

void times(float a[M][M], float b[M][M], float c[M][M]) {
	for(int i = 0; i < M; i++) {
		for(int j = 0; j < M; j++) {
			float skalaar = 0;
			for(int k = 0; k < M; k++)
				skalaar += a[i][k] * b[k][j];
			c[i][j] = skalaar;
		}
	}
}
void timesVM(float a[M], float b[M][M], float c[M]) {
	for(int j = 0; j < M; j++) {
		float skalaar = 0;
		for(int k = 0; k < M; k++)
			skalaar += a[k] * b[k][j];
		c[j] = skalaar;
	}
}
void set(float a[M][M], float b[M][M]) {
	for(int i = 0; i < M; i++)
		for (int j = 0; j < M; j++)
			b[i][j] = a[i][j];
}
void homogen(float a[M], float b[M]) {
	for(int i = 0; i < M-1; i++) b[i] = a[i];
	b[M-1] = 1;
}
void cortesian(float b[M], float a[M]) {
	for(int i = 0; i < M-1; i++)
		a[i] = b[i] / b[M-1];
}
void makeHomogenVec(float x, float y, float c[M]) {
	c[0] = x;
	c[1] = y;
	c[2] = 1;
}
void unit(float e[M][M]){
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < M; j++) {
			if (i == j) e[i][j] = 1;
			else e[i][j] = 0;
		}
	}
}
void move(float Tx, float Ty, float c[M][M]) {
	unit(c);
	c[M-1][0] = Tx;
	c[M-1][1] = Ty;
}
void rotate(float phi, float c[M][M]) {
	unit(c);
	c[0][0] = cos(phi); c[1][0] = -sin(phi);
	c[0][1] = sin(phi); c[1][1] = cos(phi);
}
void scale(float S, float c[M][M]) {
	unit(c);
	c[0][0] = S; c[1][1] = S;
}

void scaleM(float S, float P, float B, float A, float c[M][M]) {
	unit(c);
	c[0][0] = S / P;
	c[1][1] = B / A;
}