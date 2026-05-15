#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    // Simple map: student id -> name
    map<int,string> students;
    students.emplace(101, "Alice");
    students.emplace(103, "Charlie");
    students[102] = "Bob"; // operator[] inserts if missing

    cout << "Students (ascending by id):" << endl;
    for (const auto &p : students)
        cout << p.first << " -> " << p.second << endl;

    cout << "\nNumber of students: " << students.size() << endl;

    auto it = students.find(102);
    if (it != students.end())
        cout << "Found id 102: " << it->second << endl;

    // Show reverse order
    cout << "\nStudents (descending by id):" << endl;
    for (auto rit = students.rbegin(); rit != students.rend(); ++rit)
        cout << rit->first << " -> " << rit->second << endl;

    return 0;
}
