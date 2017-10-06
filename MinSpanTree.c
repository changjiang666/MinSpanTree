#include "MinSpanTree.h"
#include <stdio.h>
void MinSpanTreePrim(MGraph G)
{
	int i, j, k, min; 

	int adjvex[MAXVEX];
	int lowcost[MAXVEX];
	adjvex[0] = lowcost[0] = 0;

	for (i = 1; i < G.vexNum; ++i)
	{
		lowcost[i] = G.arc[0][i];
		adjvex[i] = 0;
	}

	for (i = 1; i < G.vexNum; ++i)
	{
		min = INF;
		for (j = 1; j < G.vexNum; ++j)
		{
			if (lowcost[j] && min > lowcost[j])
			{
				min = lowcost[j];
				k = j;
			}
		}

		printf("(%d, %d)", adjvex[k], k);
		lowcost[k] = 0;

		for (j = 1; j < G.vexNum; ++j)
		{
			if (lowcost[j] && G.arc[k][j] < lowcost[j])
			{
				lowcost[j] = G.arc[k][j];
				adjvex[j] = k;
			}
		}

	}
}

void CreateEageTable(Eage E, int eageNum)
{
	int i;
	for (i = 0; i < eageNum; ++i)
	{
		printf("输入边的起始位置，终点位置，权值："); 
		scanf_s("%d,%d,%d", &E[i].begin, &E[i].end, &E[i].weight);
	}
}

int find(int *parent, int i)
{
	while (parent[i])
	{
		i = parent[i];
	}
	return i;
}

void MinSpanTreeKruskal(Eage E)
{
	int parent[MAXVEX];
	int eageNum, vexNum, i;

	int m, n;

	printf("请输入顶点数和边数：");
	scanf_s("%d,%d",&vexNum, &eageNum);
	CreateEageTable(E, eageNum);

	for (i = 0; i < MAXVEX; ++i)
		parent[i] = 0;

	for (i = 0; i < eageNum; ++i)
	{
		m = find(parent, E[i].begin);
		n = find(parent, E[i].end);

		if (m != n)
		{
			parent[m] = n;
			printf("(%d, %d), %d\n", E[i].begin, E[i].end, E[i].weight);
		}
	}
	
}