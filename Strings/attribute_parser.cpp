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

void SetTag(unordered_map<string, Tag*> &tags, const string &name);

int main() {
    unordered_map<string, Tag*> tags;

    int n, q;
    cin >> n >> q;
    cin.ignore(100, '\n');

    string tmp_line;
    while (n--) {
        getline(cin, tmp_line);
        cin.ignore(100, '\n');

        bool is_end = false;
        int tmp_index;
        string tmp_name;
        Tag tmp_tag;
        for (int i = 1; i < tmp_line.size(); ++i) {
            if (tmp_line[i] == ' ' || tmp_line[i] == '>') {
                tmp_index = i + 1;
                tmp_name = tmp_line.substr(1, i - 1);
                tmp_tag = {tmp_name, };
                tags.emplace(tmp_name, &tmp_tag);

                if (tmp_line[i] == '>') {
                    is_end = true;
                }
                break;
            }
        }

        while (is_end == false) {
            for (int i = 0; i < tmp_line.size(); ++i) {

            }

        }

        for (int i = 0; i < ; ++i) {

        }

    }
}

void SetTag(unordered_map<string, Tag*> &tags, const string &name) {
    Tag tag {name, };
    Tag *p_tag = &tag;
    tags.emplace(name, p_tag);
}

void SetAttribute() {

}