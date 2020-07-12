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
  int linhas,colunas,bombs,jogadas,x,y,flag=0;
  srand(time(NULL));
  //cout << rand()%10+1 << endl;

  while(linhas<=1 || colunas<=1){
      cout<<"Insira o numero de linhas e colunas"<<endl;
      cin>>linhas>>colunas; //entrada de linhas e colunas
  if (linhas>=2 && colunas>=2){
        while(bombs<2){
        cout<<"Insira o numero de bombas"<<endl;
        cin>>bombs;
        }
    }
  }
    char field[linhas][colunas];
    char bombs_positions[linhas][colunas];

    //GERAR O CAMPO
     for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            field[i][j] = '-';
            bombs_positions[i][j] = '0';
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
        while(bombs_positions[random_row][random_col] == 'x'){
            random_row = rand()%linhas+1;
            random_col = rand()%colunas+1;
        }

        bombs_positions[random_row][random_col] = 'x';
    }

       for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){

            cout << bombs_positions[i][j] << " ";
        }
        cout << endl;
    }
    for(jogadas=1;jogadas<4;jogadas++){
    do{
    cout<<"Insira as linhas e colunas que voce vai jogar"<<endl;
    cin>>x>>y;
    }while((x<0||x>linhas)||(y<0||y>colunas));
    if(bombs_positions[x][y]=='x'){/* condição se marcar o espaço que está a mina, o jogo acaba */
           cout<<"Errou"<<endl;
            break;
    }
    else if (bombs_positions[x][y]==!"x"){
      cout<<"Acertou!"<<endl;
    }
  }
  return 0;
}
