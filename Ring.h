#pragma once
#include "Polynom.h"


class Ring : public Polynom {

private:

protected:
	// a vector of irreducible polynomials
	std::vector<Polynom> polynomials;
	// R(p^n)[x]/Q
public:
	Ring();
	//+
	//-
	//*
	//==
	//!=
};