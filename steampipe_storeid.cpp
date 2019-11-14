/*****************
* steampipe_storeid
*
* simple hardcoded storeid rewrite for the steampipe cdn
*****************/


#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
	//const regex valve = regex("valve[0-9]+\\.steamcontent\\.com/depot/");
	const regex valve = regex("cache[0-9]+-[a-z0-9]+\\.steamcontent\\.com/depot/");
	const string internal = "steamcontent.squid.internal/depot/";
	string line;

	while (getline(cin,line, '\n')) {
		if (line == "quit") exit(0);
		if (line.find('?') != std::string::npos) line.resize(line.find('?'));	// discard the parameters
		cout << "OK store-id=" << regex_replace(line, valve, internal) << endl;	// and substitute internal name
	};

	return 0;
}
