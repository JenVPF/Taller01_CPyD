#ifndef FUNCIONES_H
#define FUNCIONES_H

struct venta{
    std::string created;//Fecha de compra 2020-10-14
    int sku;//identificador de producto
    int quantity;//cantidad adquirida
    float amount;//valor de los productos adquiridos (en CLP)
    std::string name;//indica el nombre del producto y sirve de descripción
};

void Participantes();
std::vector<std::string> obtenerlinea(std::string);
venta guardarVenta(std::vector<std::string>);
void imprimirvector(std::vector<venta>);
# endif