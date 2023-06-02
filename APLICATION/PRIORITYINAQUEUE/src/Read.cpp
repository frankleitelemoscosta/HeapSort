#include<iostream>
#include<string>
#include"Read.hpp"
#include"Fila.hpp"

using namespace std;

void AdicionandoPeso(Item *item)
{

    if(item->age > 70)
    {
        item->Weight = 1;
    }else if(item->age > 30 && item->age < 71)
    {
        item->Weight = 2;
    }
    else{
        item->Weight = 3;
    }

}

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
        AdicionandoPeso(&item);
        Enfileira(F,item);
    }

    fclose(file);
}