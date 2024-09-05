//
// Created by 2050189 on 2024-09-04.
//

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


