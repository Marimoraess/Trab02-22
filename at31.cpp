#include<iostream>
#include<conio.h>
using namespace std;
float calculaPesoIdeal(int sexo, float altura);
float calculaIMC(float peso, float altura);
void cal(float pesoIdeal, float Ximc);
int main()
{
    float peso, altura, pesoIdeal, Ximc;
    int sexo, rep=1;
    while(rep==1)
    {
        cout<<"\nDigite seu peso "<<endl;
        cin>>peso;
        cout<<"\nDigite usa altura "<<endl;
        cin>>altura;
        cout<<"\ndigite 1 para sexo masculino e digite 2 para sexo feminino"<<endl;
        cin>>sexo;


        pesoIdeal = calculaPesoIdeal(sexo, altura);

        Ximc = calculaIMC(peso, altura);

        cal( pesoIdeal,Ximc);
    }
}

void cal(float pesoIdeal, float Ximc)
{
    cout<<"\npesoIdeal: "<<pesoIdeal;
    if(Ximc<=17)
    {
        cout<<"\nMuito abaixo do Peso";
    }
    else   if(Ximc<=18,49)
    {
        cout<<"\nAbaixo do Peso";
    }
    else if(Ximc<=24,99)
    {
        cout<<"\nPeso normal";
    }
    else    if(Ximc<=34,99)
    {
        cout<<"\nObesidade I";
    }
    else  if(Ximc<=29,99)
    {
        cout<<"\nAcima do Peso";
    }
    else   if(Ximc<=39,99)
    {

        cout<<"\nObesidade II(severa)";
    }
    else   if(Ximc>40)
    {
        cout<<"\nObesidade III(mórbida)";
    }
}





float calculaPesoIdeal(int sexo, float altura)
{
    float calculo;
    switch(sexo)
    {
    case 1:
        calculo = (72.7* altura) -58;
        break;

    case 2:
        calculo =( 62.1* altura) -44.7;
        break;
    }
    return calculo;

}

float calculaIMC(float peso, float altura)
{
    float calculaIMC;
    calculaIMC = peso / (altura*altura);/////
    return calculaIMC;
}

