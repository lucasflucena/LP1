#include "calculadorArea.h"

CalculadorArea::CalculadorArea(){}
CalculadorArea::~CalculadorArea(){}

float 
CalculadorArea::calculaAreaTriangulo(Triangulo& triangulo){
    return (triangulo.getBase() * triangulo.getAltura())/2;
}
