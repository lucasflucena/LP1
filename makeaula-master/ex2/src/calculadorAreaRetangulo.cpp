#include "calculadorArea.h"

CalculadorArea::CalculadorArea(){}
CalculadorArea::~CalculadorArea(){}

float 
CalculadorArea::calculaAreaRetangulo(Retangulo& retangulo){
    return retangulo.getBase() * retangulo.getAltura();
}
