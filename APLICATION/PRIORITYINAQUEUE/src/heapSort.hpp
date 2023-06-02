#ifndef __HEAPSORT_HPP
#define __HEAPSORT_HPP

#include<stdio.h>
#include"Fila.hpp"

//métodos
    void HeapSort(Fila *F);
    void ajustarHeapMax(Fila *f, Block *pai, Block *filho);
    void construirHeapMax(Fila *f);

#endif