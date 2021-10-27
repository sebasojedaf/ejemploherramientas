#include <iostream>
#include <cmath>

typedef double REAL;
REAL summenos(int N);
REAL sumpositiva(int N);
REAL FRAC(REAL A, REAL B);
REAL sumalternante(int N);
REAL MULTI(REAL A, REAL B);
int main(void)
{
    std::cout.precision(6);
    std::cout.setf(std::ios::scientific);
    REAL suma2=0;
    REAL suma3=0;
    REAL suma1=0;
    for(int ii = 1; ii < 200; ++ii) {
        REAL suma1 = sumalternante(ii);
        REAL suma2 =suma2+summenos(ii);
	REAL suma3 =suma3+sumpositiva(ii);
        std::cout << ii <<"\t" << suma1 << "\t" << suma2 <<"\t"<< suma3 <<"\t" << std::fabs(1 - suma2/suma3) <<"\t"<< std::fabs(1 - suma1/suma3)<< "\n";
    }
    //REAL suma4=0;
    //REAL suma1=0;
    //  for(int ii = 1; ii < 1000; ++ii) {
    // REAL suma1 =suma1+ sumalternante(ii);
    // if(ii<500){
    //REAL suma4=suma4+summenos(ii);
    //}
    // std::cout << ii << "\t" << suma1 <<"\t" << std::fabs(1 - suma4/suma1)<< "\n";

    return 0;
}

REAL MULTI(REAL A, REAL B){
double suma = A*B;
 return suma;
}
REAL sumalternante(int N)
{
  double suma = 0;
  REAL aa=N*2;
  for(int ii = 1.0; ii <=MULTI(2,N); ii++) {
      //REAL ii=N;
      suma =suma + pow(-1.0,ii)*FRAC(ii,ii+1);
      }
    return suma;
}

REAL FRAC(REAL A, REAL B)
{
  REAL frac=A/B;

  return frac;
}
REAL summenos(int N)
{
  // REAL suma = 0;
  //REAL ii=1;
      //for(int ii =1; ii <= N; --ii) {
  // REAL suma = (1-2*N)/(2*N)+(2*N)/(2*N+1);
  REAL suma =-1*FRAC(MULTI(2,N)-1.0,MULTI(2,N))+FRAC(2*N,2*N+1);
    // }
    return suma;
}
REAL sumpositiva(int N)
{
  //REAL suma=0;
  //for(int ii=1; ii<=N;++ii){
  REAL ii =N;
  REAL suma=FRAC(1.0,2*ii+4*ii*ii);
    //}
    return suma;

    
}
