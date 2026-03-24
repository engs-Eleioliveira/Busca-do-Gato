#include <iostream>
using namespace std;

int main() {
    cout << "Bem Vindo ao Encontre o GATO" << endl << endl;

    cout << "Você recebe uma caixa misteriosa ao abrir selecione qual gato escolhe" << endl;

    int gatos123, laranja;
    cout << "1 Gato Laranja \n2 Gato Preto \n3 Gato Branco" << endl;
    cin >> gatos123;

    switch (gatos123) {
        // Laranja
        case 1:
            cout << "Ao abrir a caixa observa que o gato esta eriçado e sibilando, o que fazer?" << endl;
            cout << "1 pega-lo \n2 se aproximar \n3 deixa-lo quieto" << endl;
            cin >> laranja;

            switch (laranja) {
                case 1:
                    cout << "Ao tentar pega-lo ele arranha sua mão e você toma 30 de dano e ele foge correndo." << endl;
                    break;

                case 2:
                    cout << "Ao se aproximar o gato sibila mais e te arranha, você toma 10 de dano mas consegue pegá-lo." << endl;
                    break;

                case 3:
                    cout << "Ao deixá-lo ali, você volta depois e percebe que ele sumiu." << endl;
                    break;
            }
            break;
    }

    return 0;
}