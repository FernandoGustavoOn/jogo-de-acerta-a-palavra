#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
    char palavra[50],secreta[50],letra[1];
    int i, tam, chances, acertos;
    bool acerto=false;

    chances =6;
    tam=0;
    i=0;
    acerto=false;
    acertos=0;


    cout << "escolha uma palavra: ";
    cin >> palavra;
    system("cls");

    while (palavra[i] != '\0'){
        i++;
        tam++;
    }

    for (i=0;i<30;i++){
        secreta[i] = '-';
    }
    while((chances > 0) && (acertos < tam)){
        cout << "Chances restantes: " << chances << "\n\n";
        cout << "Palavra secreta: ";
        for (i=0; i<tam; i++){
            cout << secreta[i];
        }
        cout << "\n\ndigite uma letra: \n";
        cin >> letra[0];
        for (i=0; i<tam;i++){
            if(palavra[i]==letra[0]){
                acerto=true;
                secreta[i]=palavra[i];
                acertos++;
            }
        }
        if(!acerto){
            chances--;
        }
        acerto=false;
    }
    if (acertos == tam){
        cout << "VENCEU!:)\n\n";
    }
    else{
        cout << "PERDEU!:(" << "\n";
    }
    cout << "FIM !!!!!!";
    return 0;
}
