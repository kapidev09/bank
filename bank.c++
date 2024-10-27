#include <iostream>
using namespace std;

class Bank {
    public:
        int carteira = 0;

        void verCarteira() {
            cout << "Este é seu dinheiro disponível: " << carteira << endl;
        }

        void retirar(double retirada) {
            if (retirada > carteira) {
                cout << "Não dá para retirar, pois você não tem dinheiro suficiente no banco" << endl;
                return;
            }
            carteira -= retirada;
            cout << "Você retirou " << retirada << " reais e agora tem " << carteira << " reais na carteira." << endl;
        }

        void adicionar(double adicionar) {
            carteira += adicionar;
            cout << "Você adicionou " << adicionar << " reais à sua carteira, que agora tem " << carteira << " reais." << endl;
        }
};

int main() {
    int escolha;
    Bank opc;
     do{
    cout << "-------Banco------" << endl;
    cout << "1- Ver carteira" << endl;
    cout << "2- Retirar dinheiro" << endl;
    cout << "3- Adicionar dinheiro" << endl;
    cin >> escolha;

    switch (escolha) {
        case 1:
            opc.verCarteira(); 
            break;
        case 2:
            double retiro;
            cout << "Quanto você quer retirar: " << endl;
            cin >> retiro;
            opc.retirar(retiro);
            break;
        case 3:
            double adicionado;
            cout << "Quanto você quer adicionar: " << endl;
            cin >> adicionado;
            opc.adicionar(adicionado);
            break;
        default:
            cout << "Opção inválida" << endl;
    }
} while (true);
    return 0;
}
