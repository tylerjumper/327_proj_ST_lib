#pragma once
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"

#include "./includes/constants.h"

//class ST_American_DonutEnthusiest :
//	public Smalltalk_American
//{
	//create with appropriate phrases
	ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int i) : Smalltalk_American(AMERICAN, i){
		this->populatePhrases();
	}

	ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest(void){

	}

	//base class populatePhrases() will be called first as part of its construction
	//before this class calls populate phrases as part of its construction
	//the end result is mySmallTalk will contain first the base class phrases and
	//then this classes phrases
	void ST_American_DonutEnthusiest::populatePhrases(){
		mySmallTalk.push_back(AMERICAN_PHRASE_1);
		mySmallTalk.push_back(AMERICAN_PHRASE_2);
		mySmallTalk.push_back(AMERICAN_PHRASE_3);
		mySmallTalk.push_back(AMERICAN_PHRASE_4);
		mySmallTalk.push_back(AMERICAN_PHRASE_5);
		mySmallTalk.push_back(AMERICAN_DE_PHRASE_1);
		mySmallTalk.push_back(AMERICAN_DE_PHRASE_2);
		mySmallTalk.push_back(AMERICAN_DE_PHRASE_3);
		mySmallTalk.push_back(AMERICAN_DE_PHRASE_4);
		mySmallTalk.push_back(AMERICAN_DE_PHRASE_5);

	}
//};
