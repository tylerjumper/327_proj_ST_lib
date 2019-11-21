#pragma once
#include "./includes/Smalltalk_American.h"
class ST_American_DonutEnthusiest :
	public Smalltalk_American
{
	//create with appropriate phrases
	ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int i) : Smalltalk_American(i){

	}

	ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest(void){

	}

	//base class populatePhrases() will be called first as part of its construction
	//before this class calls populate phrases as part of its construction
	//the end result is mySmallTalk will contain first the base class phrases and
	//then this classes phrases
	void ST_American_DonutEnthusiest::populatePhrases(){
				//populate this with the Donut sayings
				/*
				 *  "Krispy Kreme is the bees knees!";
				 *	"Dunkin Donuts is a horrendous, disappointing compromise";
				 *	"...Jelly..donuts..are..an..abomination...";
				 *	"If \'Hot Donuts Now\' is lit, I\'m stopping";
				 *	"I\'m thinking a dozen hots, you want anything?";
				 * */
	}
};
