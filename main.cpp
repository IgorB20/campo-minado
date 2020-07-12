#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

//mostra o campo do jogo na tela
void showField(int linhas, int colunas){
    //- = campo vazio
    //x = bomba

    char linhas_letters[26] = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'];
    char colunas_indices[26] = ['0', '1', '2', '3', '4', '5', '6', '7', '8'];

    cout << "Campo: " << endl;
    for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            cout << "- ";
        }
        cout << endl;
    }
}



int main(){
  int i,j,bomb,bomb2;

  while(i<=1 || j<=1){
  cout<<"Insira o numero de linhas e colunas"<<endl;
  cin>>i>>j; //entrada de linhas e colunas
  }
  if (i>=2 && j>=2){
    while(bomb<2){ //entrada de bombas
        cout<<"Insira o numero de bombas"<<endl;
        cin>>bomb;
    }
    }

  }
 showField(i, j);
}
