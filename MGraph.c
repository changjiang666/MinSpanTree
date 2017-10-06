#include "MGraph.h"
#include <stdio.h>

void CreateMGraph(MGraph *G)
{
	int i, j, k, weight;
	printf("���붥�����ͱ�����");
	scanf_s("%d,%d", &G->vexNum, &G->arcNum);
	getchar();

	printf("���붥����Ϣ��");
	for (i = 0; i < G->vexNum; ++i)
	{
		scanf_s("%c", &G->vexs[i]);
	}
	getchar();

	for (i = 0; i < G->vexNum; ++i)
		for (j = 0; j < G->vexNum; ++j)
			G->arc[i][j] = INF;

	for (k = 0; k < G->arcNum; ++k)
	{
		printf("����ߣ�Vi, Vj�����±�i,�±�j��Ȩw:");  
		scanf_s("%d,%d,%d", &i, &j, &weight);
		G->arc[i][j] = G->arc[j][i] = weight;
	}
}
