#pragma once
#include "CTesto.h"
class CTasto
{
private:
	CTesto testo;
	Color cInterno;
	Color cMargine;
	int x, y;
	bool isSchiacciato;

public:
	CTasto();
	CTasto(CTesto testo, Color cInterno, Color cMargine, int x, int y);
};

