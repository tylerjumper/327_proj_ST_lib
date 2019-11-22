//
/*
 * Smalltalk_Brit.cpp
 *
 *  Created on: Nov 21, 2019
 *      Author: Tyler Jumper
 */
#pragma once
#include "./includes/Smalltalk.h"
#include "./includes/constants.h"
#include "./includes/Smalltalk_Brit.h"




	//create with appropriate phrases
	Smalltalk_Brit::Smalltalk_Brit(int iPerson): Smalltalk(BRIT, iPerson){
		this->populatePhrases();
	}

	Smalltalk_Brit::~Smalltalk_Brit(void){

	}
	void Smalltalk_Brit::populatePhrases(){
		//populate this with the Brit sayings
		mySmallTalk.push_back(BRIT_1);
		mySmallTalk.push_back(BRIT_2);
		mySmallTalk.push_back(BRIT_3);
		mySmallTalk.push_back(BRIT_4);
		mySmallTalk.push_back(BRIT_5);
		mySmallTalk.push_back(BRIT_6);
		mySmallTalk.push_back(BRIT_7);

	}
