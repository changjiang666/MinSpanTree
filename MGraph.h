#pragma once
#define MAXVEX 10
#define INF	65535
#define FALSE 0
#define TRUE 1

typedef int Boolen;
typedef char VertexType;
typedef int EageType;

typedef struct
{
	VertexType vexs[MAXVEX];
	EageType arc[MAXVEX][MAXVEX];
	int vexNum, arcNum;
}MGraph;
Boolen visited[MAXVEX];

void CreateMGraph(MGraph *G);