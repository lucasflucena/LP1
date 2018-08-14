#include "calculadorArea.h"

CalculadorArea::CalculadorArea(){}
CalculadorArea::~CalculadorArea(){}

float 
CalculadorArea::calculaAreaCirculo(Circulo& circulo){
    return pow(circulo.getRaio(),2) * M_PI;
}
