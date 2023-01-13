#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A [],int N,double B []){
    int i = 0;
        while(i<N){
            B[0]+=A[i];
            i++;
        } B[0] = B[0]/N;
    i = 0;
    double devia=0;
        while(i<N){
            devia += pow((A[i]-B[0]),2);
            i++;
        } B[1] = sqrt(devia/N);
    i=0;
    double geo = 1;
        while(i<N){
            geo *= A[i];
            i++;
        } B[2] = pow(geo,1.0000/N);
    i=0;
    double harmo = 0;
        while(i<N){
            harmo += 1/A[i];
            i++;
        } B[3] = N/harmo;
    i=0;
    double max = A[0];
        while(i<N){
                if(A[i]>=max) max = A[i];
            i++;
        }
    B[4] = max;
    i=0;
    double min = A[0];
        while(i<N){
                if(A[i]<=min) min = A[i];
            i++;
        }
    B[5] = min;
}