#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	map<string,int> m;
	m["apple"] = 3;
	m.insert({"banana", 2});
	m.emplace("orange", 5);

	cout << "Contents:" << endl;
	for (const auto &p : m)
		cout << p.first << ": " << p.second << endl;

	cout << endl << "Count of 'apple': " << m.count("apple") << endl;

	auto it = m.find("banana");
	if (it != m.end())
		cout << "Found banana->" << it->second << endl;

	m.erase("apple");
	cout << "After erase('apple'), size: " << m.size() << endl;

	map<int,string> idx;
	idx[2] = "two";
	idx[1] = "one";
	idx[3] = "three";

	cout << endl << "Ordered:" << endl;
	for (const auto &p : idx)
		cout << p.first << ": " << p.second << endl;

	return 0;
}

