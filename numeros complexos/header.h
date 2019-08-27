#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

typedef struct
{
   int real, imaginario;
}numeroImaginario;

void Atribui(numeroImaginario* numero, int real, int imaginario);
void Imprime(numeroImaginario* numero);
void Copia(numeroImaginario numero, numeroImaginario numero1);
void Soma(numeroImaginario* numero, numeroImaginario* numero1);
void EhReal(numeroImaginario* numero);

#endif // HEADER_H_INCLUDED
