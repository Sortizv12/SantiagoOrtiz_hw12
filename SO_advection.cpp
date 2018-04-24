#include <iostream>
#include <stdlib.h>
using namespace std;


const int nt=700;
const int nx=100;
const float min_x=-2;
const float max_x=2;
const float dt=0.001;
const float dx=(max_x-min_x)/(1.0*nx);
const float c=1;
float u[nx][nt];
float X[nx];
float T[nt];
void evolve(int posicion);


int main()
{
	//Condiciones de frontera
	for(int j=0;j<nt;j++)
	{
		u[0][j]=0.0;
		u[nx-1][j]=0.0;
	}



	X[0]=min_x;
	//Condiciones iniciales
	for(int i=1;i<nx;i++)
	{
		X[i]=-2+i*dx;
		if(abs(X[i])<=0.5)
		{ 
			u[i][0]=0.5;
		}
		else if(abs(X[i])>=0.5)
		{
			u[i][0]=0;
		}
		//cout << X[i] << " "<< u[i][0]<< endl;
	}

	evolve(0);
	evolve(100);
	evolve(300);
	evolve(500);
	evolve(699);
	return 0;
}



void evolve(int posicion)
{
	for(int j=1;j<nt;j++)
	//for(int i=1;i<nx;i++)
	{
		//for(int j=1;j<nt;j++)
		for(int i=1;i<nx;i++)
		{	
			u[i][j]=u[i][j-1] - c*(dt/dx)*(u[i][j-1]-u[i-1][j-1]);
		}
	}
	for(int m=0;m<nx;m++)
	{
		cout << X[m] << " " << u[m][posicion]<<endl;
	}
	
}
