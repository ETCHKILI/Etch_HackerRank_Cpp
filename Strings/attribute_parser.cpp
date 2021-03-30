#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;



struct attribute {
    string name;
};

struct Tag {
    string name;
    unordered_map<string, attribute*> attributes;
};

int main() {
    unordered_map<string, Tag*> tags;

    int n, q;
    cin >> n >> q;
    cin.ignore(100, '\n');

    string tmp;
    while (n--) {
        getline(cin, tmp);
        cin.ignore(100, '\n');

    }
}

void get_tag(unordered_map<string, Tag> &tags, const string &name) {
    Tag tag {name, };
    Tag *p_tag = &tag;
    tags.emplace(name, p_tag);


}