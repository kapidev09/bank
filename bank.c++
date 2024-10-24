#include <iostream> 
 using namespace std;


     class bank {
        public:
           int carteira = 0;
        void carteira(){
            
             cout<< "este é seu dinheiro que tem disponível"<< carteira;
        }
 

        double retirar (double retirada){
               carteira = retirada - carteira;
                 
                 if(carteira = 0){
                     cout<<" não da pra retirar pois vc não tem dinheiro no banco"<<endl;
                 };

                cout<<"vc retirou "<< retirada <<" reais e sobrou em sua carteira "<< carteira;
        }
         
         double adicionar(double adiconar ){
               carteira = adiconar + carteira;
                cout<<"vc adicionou "<<adicionar<<" reais a tua carteira é agora tem tanto "<< carteira<<" reais"<<endl;
         }


     };
      
    





  int main (){
     int escolha;
     bank opc;
        
        
         cout<<"-------banco------"<<endl;
          cout<<"1- ver carteira"<<endl;
           cout<<"2- retirar dinheiro"<<endl;
            cout<<"3- adcionar dinheiro"<<endl;
             cin>>escolha;
        
        
        
        switch (escolha){
            case 1:
              opc.carteira;
            break;
            case 2:
               
                double retiro;
               cout<<" o quanto vc quer retirar: "<<endl;
                cin>>retiro;
                 opc.retirar(retiro);
             break;
             case 3:
               
                  double adicionado;
               cout<<" o quanto vc quer adicionar: "<<endl;
                cin>>adicionado;
                     opc.adicionar(adicionado);

              break;
        };
           
        

    




    return 0;
  };