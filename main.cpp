#include <iostream>
#include <time.h>
#include <vector>
#include <cstdlib>

using namespace std;

//mostra o campo do jogo na tela
void showField(int linhas, int colunas){
    //- = campo vazio
    //x = bomba

    cout << "Campo: " << endl;
    for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            cout << "- ";
        }
        cout << endl;
    }
}



int main(){
  int linhas,colunas,bombs;
  srand(time(NULL));
  //cout << rand()%10+1 << endl;

  while(linhas<=1 || colunas<=1){
      cout<<"Insira o numero de linhas e colunas"<<endl;
      cin>>linhas>>colunas; //entrada de linhas e colunas
  }

  if (linhas>=2 && colunas>=2){
    while(bombs<2){ //entrada de bombas
        cout<<"Insira o numero de bombas"<<endl;
        cin>>bombs;
    }
  }

    char field[linhas][colunas];
    int bombs_positions[linhas][colunas];

    //GERAR O CAMPO
     for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            field[i][j] = '-';
            bombs_positions[i][j] = 0;
            cout << field[i][j] << " ";
        }
        cout << endl;
    }

    //GERAR BOMBAS ALEATORIAS
    for(int i=0;i<bombs;i++){
        int random_row, random_col;

        random_row = rand()%linhas+1;
        random_col = rand()%colunas+1;

        //verificar se no campo já nao possui uma bomba nessas coordenadas
        while(bombs_positions[random_row][random_col] == 1){
            random_row = rand()%linhas+1;
            random_col = rand()%colunas+1;
        }

        bombs_positions[random_row][random_col] = 1;
    }

 return 0;

  }


