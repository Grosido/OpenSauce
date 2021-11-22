//
// Created by erlan on 2021-11-09.
//

#ifndef OPENSAUCE_INGREDIENT_H
#define OPENSAUCE_INGREDIENT_H
#define INGREDIENT_NAME_MAX_CHARACTERS 20

#include "unit.h"

//Ingredient struct holding information about a specific item
typedef struct {
    char name[INGREDIENT_NAME_MAX_CHARACTERS];
    int id;
    Unit unit;
}Ingredient;

//Item struct holds information about an item item.
typedef struct {
    int id;
    float amount;
    Unit unit;
}Item;

typedef struct {
    Ingredient* ingredients;
    int numIngredients;
}IngredientList;

Item createItem(int id, float amount, Unit unit);
void addIngredient(IngredientList* list, int id, char* name, Unit unit);
void changeItemUnit(Item* i, Unit desiredUnit);

IngredientList loadIngredients(char* fileName);
int saveIngredients(char* fileName, IngredientList list);
Ingredient getIngredientByID(IngredientList list, int id);

#endif //OPENSAUCE_INGREDIENT_H
