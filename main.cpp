#include <iostream>

using namespace std;

int main ()
{
    float distancia, eficiencia, preco, valorporkm, gasto, gastoidaevolta;

    cout << "CALCULAR GASTO MEDIO DE COMBUSTIVEL PARA UMA VIAGEM" << endl;
    cout << "INSIRA OS DADOS SOLICITADOS ABAIXO: " << endl;
    
    cout << "INSIRA AQUI A DISTANCIA A SER PERCORRIDA: ";
    scanf ("%f", &distancia);

    cout << "INSIRA AQUI A EFICIENCIA DO VEICULO EM KM: ";
    scanf ("%f", &eficiencia);

    cout << "PRECO MEDIO DO COMBUSTIVEL EM R$: ";
    scanf ("%f", &preco);

    valorporkm = (preco / eficiencia);
    //printf ("VALOR GASTO A CADA 1KM: %f \n", valorporkm);
    gasto = (distancia * valorporkm);
    gastoidaevolta = (2 * gasto);

    printf ("O GASTO TOTAL PARA IDA E DE: %f \n", gasto);
    printf ("O GASTO TOTAL PARA IDA E VOLTA E DE: %f \n", gastoidaevolta);

    system("pause");
    return 0;

}