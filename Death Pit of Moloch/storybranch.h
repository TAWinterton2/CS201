#pragma once
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<vector>
#include<map>
#include"charactersheet.h"
#include"character_creation.h"
#include"NPC.h"



using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::map;

#ifndef STORYBRANCH_HPP
#define STORYBRANCH_HPP

//Story branch offs for First segment of adventure (Cavern)
bool Dialouge_Refuse_Help(Character_Sheet& playercharacter);

#endif

