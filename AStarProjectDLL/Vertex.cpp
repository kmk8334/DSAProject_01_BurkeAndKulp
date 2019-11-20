#include "stdafx.h"
#include "Vertex.h"


int Vertex::GetFCost()
{
	// !-------- TO DO ----------!
	// CALCULATE THE F COST HERE AND RETURN IT
	return 0;
}

// !-------------DO NOT EDIT THIS--------------!
// This method simply exposes the vertex's gCost publicly.
int Vertex::GetGCost()
{
	return gCost;
}

// !-------------DO NOT EDIT THIS--------------!
// This method simply exposes the vertex's hCost publicly.
int Vertex::GetHCost()
{
	return hCost;
}

// !-------------DO NOT EDIT THIS--------------!
// This method simply exposes the vertex's parent publicly.
Vertex * Vertex::GetParent()
{
	return parent;
}

void Vertex::SetHCost(int _endX, int _endY)
{
	/* !-------- TO DO ----------!
	   CALCULATE THE HEURISTIC COST FOR THIS VERTEX TO THE END USING
	   THE MANHATTAN DISTANCE FORMULA. STORE THE RESULTS IN hCost
	*/
}

bool Vertex::SetParentIfCheaper(Vertex* _possibleParent)
{
	/* !-------- TO DO ----------!
	   THIS METHOD IS USED TO INTELLIGENTLY SWAP THE VERTEX'S PARENT
	   IF NEED BE. CHECK TO SEE IF THE PARENT SHOULD BE SWAPPED WITH
	   THE ONE PASSED IN. IF A SWAP OCCURS (OR IF YOU ARE SETTING THE
	   PARENT FOR THE FIRST TIME), RETURN TRUE. OTHERWISE RETURN FALSE.
	*/
	return true;
}
