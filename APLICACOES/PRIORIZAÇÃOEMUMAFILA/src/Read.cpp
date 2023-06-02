#include<iostream>
#include<string>
#include"Read.hpp"
#include"Fila.hpp"

using namespace std;

void ReadFile(Fila *F){
   
    char name[20];
    signed short int auxAge;
    Item item;

    FILE *file = fopen("./dataset/input.data","r");

    if(file == NULL)
    {
        printf("file is not opened");
        return;
    }

    FFVazia(F);

    while(!feof(file))
    {
        fscanf(file,"%s",name);
        fscanf(file,"%hd",&auxAge);
        item.name = string(name);
        item.age = auxAge;
        Enfileira(F,item);
    }

    fclose(file);


}