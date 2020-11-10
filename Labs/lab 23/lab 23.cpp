#include<iostream>
#include<string>
#include<map>
#include<utility>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::map;

int main() {
	//declare map
	map<string, float> user_score{
		{"Nirvana: Nevermind", 3.95},
		{"Metallica: Ride The Lightning", 4.06},
		{"Muse: Origin Of Symmetry", 3.50	},
		{"Helloween: Keeper of the Seven Keys Part II", 3.89	},
		{"Tears for Fears: Songs From the Big Chair", 3.85}

	
	};

	//print out elements of map
	cout << "Artist/LP Name" << ":" << "AVG user_score" << endl;
	cout << endl;
	for (const auto & a: user_score) {
		cout << a.first << ":" << a.second << endl;
	
	}
	cout << endl;

	user_score.erase("Muse: Origin Of Symmetry");
	for (const auto& a : user_score) {
		cout << a.first << ":" << a.second << endl;
	}

	return 0;
}