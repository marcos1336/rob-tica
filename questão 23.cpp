// funcoes.h
#ifndef FUNCOES_H
#define FUNCOES_H

#include <iostream>

void mostrarInfo();

#endif // FUNCOES_H

// funcoes.cpp
void mostrarInfo() {
    std::cout << "Sistema de Viagem - Jadoo Travel" << std::endl;
    std::cout << "Versão 1.0" << std::endl;
    std::cout << "Desenvolvido por Marcos Vinicius" << std::endl;
}

// main.cpp
int main() {
    mostrarInfo();
    return 0;
}
