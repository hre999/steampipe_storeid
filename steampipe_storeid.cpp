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
	const regex valve = regex("valve[0-9]+\\.steampipe\\.steamcontent\\.com/depot/");
	const string internal = "steampipe.steamcontent.squid.internal/depot/";
	string line;

	while (getline(cin,line, '?')) {	// since all requests contain parameters, we can just use the ? as a delimiter and discard the rest
		cin.ignore(10000, '\n');
		cout << "OK store-id=" << regex_replace(line, valve, internal) << endl;
	};

	return 0;
}
