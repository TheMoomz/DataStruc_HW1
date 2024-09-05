//
// Created by 2050189 on 2024-09-04.
//


//Il faut : 1.Check si n<=12 ; 2.Check si n>0 ; 3.Check si k<=n


#include "modules.h"

long int calculeNbCombinaisons(int e_nbTotN, int e_nbChoixK) {


	return factorielle(e_nbTotN)/((factorielle(e_nbChoixK))*(factorielle(e_nbTotN-e_nbChoixK)));
};


long int factorielle(int e_nb) {

	

	if (e_nb == 0) {
		return 1;
	}
	
	return e_nb * (e_nb - 1);
};


