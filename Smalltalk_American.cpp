#pragma once
#include <vector>
#include "./includes/Smalltalk.h"
#include "./includes/constants.h"
#include "./includes/Smalltalk_American.h"



	//create with appropriate phrases
	//use base class call to set Nationality (See constants for Nationality strings)
	Smalltalk_American::Smalltalk_American(int iPerson) : Smalltalk(AMERICAN, iPerson){
		this->populatePhrases();
	}

	Smalltalk_American::Smalltalk_American(std::string myNationality,int iPerson): Smalltalk(AMERICAN, iPerson){

	}

	Smalltalk_American::~Smalltalk_American(void){

	}
	void Smalltalk_American::populatePhrases(){
			//populate this with the American sayings

		mySmallTalk.push_back(AMERICAN_PHRASE_1);
		mySmallTalk.push_back(AMERICAN_PHRASE_2);
		mySmallTalk.push_back(AMERICAN_PHRASE_3);
		mySmallTalk.push_back(AMERICAN_PHRASE_4);
		mySmallTalk.push_back(AMERICAN_PHRASE_5);
	}

