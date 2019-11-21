#pragma once
#include "./includes/Smalltalk.h"
#include "./includes/constants.h"


class Smalltalk_Brit :
	public Smalltalk
{
	//create with appropriate phrases
	Smalltalk_Brit::Smalltalk_Brit(int iPerson): Smalltalk(BRIT, iPerson){

	}

	Smalltalk_Brit::~Smalltalk_Brit(void){

	}
	void Smalltalk_Brit::populatePhrases(){
			//populate this with the BRIT sayings
		/*
		 *  "Those chips gave me the collywobbles";
		 *	"Im a bit knackered mate";
		 *	"Look at that legless bloke";
		 *	"Im off to the big smoke";
		 *	"I was serving at her majesties pleasure";
		 *	"I got a right good bollicking for skiving off work.";
		 *  "Its all rubbish!";
		 * */
	}
};
