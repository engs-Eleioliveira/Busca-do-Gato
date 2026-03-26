#include <iostream>
using namespace std;

int main() {
    cout << "Bem Vindo ao Encontre o GATO" << endl << endl;

    cout << "Você recebe uma caixa misteriosa ao abrir selecione qual gato escolhe" << endl;

    int gatos123, laranja, preto, branco;
    cout << "1 Gato Laranja \n2 Gato Preto \n3 Gato Branco" << endl;
    cin >> gatos123;

    switch (gatos123) {
        // Laranja
        case 1:
            cout << "Ao abrir a caixa observa um gato laranja, que esta eriçado e sibilando, o que fazer?" << endl;
            cout << "1 pega-lo \n2 se aproximar \n3 deixa-lo quieto" << endl;
            cin >> laranja;

            switch (laranja) {
                case 1:
                    cout << "Ao tentar pega-lo ele arranha sua mão, ele foge correndo." << endl;
                    break;

                case 2:
                    cout << "Ao se aproximar o gato sibila mais e te arranha, mas consegue pegá-lo." << endl;
                    break;

                case 3:
                    cout << "Ao deixá-lo ali, você volta depois, ele sumiu." << endl;
                    break;
            }
           break;

        //preto
        case 2:
        cout << "Ao abrir a caixa observa um gato preto assustado e tremulo, o que fazer?" << endl;
            cout << "1 pega-lo \n2 se aproximar \n3 deixa-lo quieto" << endl;
            cin >> preto;

            switch (preto) {
                case 1:
                    cout << "Ao tentar pega-lo você consegue porem ele continua tremende e assustado ainda mais" << endl;
                    break;

                case 2:
                    cout << "Ao se aproximar o gato salta da caixa de uma maneira inimaginavel e se esconde" << endl;
                    break;

                case 3:
                    cout << "Ao deixá-lo ali, você volta depois e percebe que ele esta ali com menos medo cheirando ao redor" << endl;
                    break;
    }
    break;
        //branco
        case 3:
        cout << "Ao abrir a caixa observa um gato branco que esta te olhando fixamente, o que fazer?" << endl;
            cout << "1 pega-lo \n2 se aproximar \n3 deixa-lo quieto" << endl;
            cin >> branco;

            switch (branco) {
                case 1:
                    cout << "Ao tentar pega-lo ele arranha seu rosto todo, ele cai no chao e você percebe seu rosto sangrar" << endl;
                    break;

                case 2:
                    cout << "Ao se aproximar ele não se mexe e continua a te olhar profundamente" << endl;
                    break;

                case 3:
                    cout << "Ao deixá-lo ali, quando volta após alguns minutos percebe ele em cima de um armario alto, você não faz a minima ideia de como ele subiu ali" << endl;
                    break;
    }
    break;
}
    return 0;
}