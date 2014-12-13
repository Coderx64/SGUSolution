#pragma once
#include "stdafx.h"

const int M = 3, N = 4;

bool kb(int x1, int y1, int x2, int y2,
		int xMin, int yMin, int xMax, int yMax, float tmp[N]) {
	int i = 1, Dx, Dy, Fx, Fy, prX, prY, Nx, Ny;
	float tMin = 0.0, tMax = 1.0, t, P, Q;

	Dx = x2 - x1;
	Dy = y2 - y1;
	
	while(true)	{
		if(i > 4) {
			tmp[0] = x1 + Dx * tMin;
			tmp[1] = y1 + Dy * tMin;
			tmp[2] = x1 + Dx * tMax;
			tmp[3] = y1 + Dy * tMax;
			return true;
		}

		if(i == 1){prX = xMin; prY = yMin; Nx = 1; Ny = 0;}
		if(i == 2){prX = xMin; prY = yMax; Nx = 0; Ny = -1;}
		if(i == 3){prX = xMax; prY = yMax; Nx = -1; Ny = 0;}
		if(i == 4){prX = xMax; prY = yMin; Nx = 0; Ny = 1;}

		//Вектор мeжду ребром и точкой
		Fx = x1 - prX;
		Fy = y1 - prY;
		//Скалярные произведения
		Q = Fx * Nx + Fy * Ny;	//Fi на нормаль
		P = Dx * Nx + Dy * Ny;	//Отрезка на нормаль
		t = -1.0 * (Q / P);

		//Анализ положения отрезков
		if(P == 0) {		//отсекаемый отрезок паралелен ребру
			if(Q < 0) return false;
			else
				i++;
		}
		else {
			if (P > 0){		//С Внешней на внутреннюю
				if(t > tMin)
					tMin = t;
			}
			else if(P < 0)	//С внутренней на внешнюю
				if(t < tMax)
					tMax = t;
			if(tMin > tMax) 
				return false;
			else
				i++;
		}
	}
}
