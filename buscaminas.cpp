#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

void buscaMinas() 
{
	int tablero[4][4],i,j,x,y,mina;
	srand(time(NULL));
	
	for(i = 0; i < 3; i++)
		{
		 for(j = 0; j < 3; j++)
			{
				mina = rand()%2;
				tablero[i][j] = mina;
			}
		}
	
		for(i = 0; i < 3; i++)
			{
				for(j = 0; j < 3; j++)
					
				{
					cout<<"Introduce las coordenadas del  buscaminas:"<<endl;
					cin>>x;
					cin>>y;
					if(tablero[x][y]==0)
					{
							cout<<"Mina no encontrada siga buscando"<<endl;
					}
					else
					{
						cout<<"Game Over"<<endl;
						i = 4;
						j = 4;
					}
					
				}
				cout<<"\n";
			}

}

int main(int argc, char *argv[]) {
	
	buscaMinas();
	return 0;
}

