const int M = 3;
float T[M][M];

void times(float a[M][M], float b[M][M], float c[M][M]);
void timesVM(float a[M], float b[M][M], float c[M]);
void set(float a[M][M], float b[M][M]);
void homogen(float a[M], float b[M]);
void cortesian(float b[M], float a[M]);
void makeHomogenVec(float x, float y, float c[M]);
void unit(float e[M][M]);
void move(float Tx, float Ty, float c[M][M]);
void rotate(float phi, float c[M][M]);
void scale(float S, float c[M][M]);