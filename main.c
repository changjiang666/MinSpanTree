#include "MGraph.h"
#include "MinSpanTree.h"
main(void)
{
	/*MGraph G;
	CreateMGraph(&G);
	MinSpanTreePrim(G);
*/
	Eage E;
	MinSpanTreeKruskal(E);
	return 0;
}