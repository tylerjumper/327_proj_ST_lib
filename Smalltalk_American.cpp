#pragma once
#include <vector>
#include "./includes/Smalltalk.h"
#include "./includes/constants.h"


class Smalltalk_American :
	public Smalltalk
{
	//create with appropriate phrases
	//use base class call to set Nationality (See constants for Nationality strings)
	Smalltalk_American::Smalltalk_American(int iPerson) : Smalltalk(AMERICAN, iPerson){

	}

	Smalltalk_American::Smalltalk_American(std::string myNationality,int iPerson): Smalltalk(AMERICAN, iPerson){

	}

	Smalltalk_American::~Smalltalk_American(void){

	}
	void Smalltalk_American::populatePhrases(){
				//populate this with the American sayings
						/*
						 *  "Yall from round here?";
						 *	"Why yes, I would like to supersize that"
						 *	"Im off to the beach for a one day va-cay"
						 *	"The mets are gonna take the pennant this year"
						 *	"I cant see that happening this year"
						 *
						 * */
	}
};
