#pragma once
#include "MGraph.h"
#define MAXEAGE 20

typedef struct
{
	int begin;
	int end;
	int weight;
}Eage[MAXEAGE];

void CreateEageTable(Eage E, int eageNum);
void MinSpanTreePrim(MGraph G);
void MinSpanTreeKruskal(Eage E);