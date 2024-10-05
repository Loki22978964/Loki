#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <cstdlib>
#include <fstream>

using namespace std;


string getRandomtoy() {
    vector<string> toy = { "\033[31m@", "\033[32m$", "\033[34m%", "\033[33m#" };
    return toy[rand() % toy.size()];
}


void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}


vector<vector<string>> createTree(int levels, vector<pair<int, int>>& toy) {
    vector<vector<string>> tree;
    int totalRows = 0;
    for (int level = 1; level <= levels; ++level) {
        for (int row = 0; row < level + 1; ++row) {
            int stars = 2 * row + 1;
            int spaces = levels - row;

            vector<string> currentRow;


            for (int i = 0; i < spaces; ++i) {
                currentRow.push_back(" ");
            }


            for (int i = 0; i < stars; ++i) {
                if (rand() % 6 == 0) {
                    currentRow.push_back(getRandomtoy());
                    toy.push_back({ totalRows, static_cast<int>(currentRow.size()) - 1 });
                }
                else {
                    currentRow.push_back("\033[32m*");
                }
            }


            for (int i = 0; i < spaces; ++i) {
                currentRow.push_back(" ");
            }

            tree.push_back(currentRow);
            ++totalRows;
        }
    }
    int trunkHeight = 2;
    for (int i = 0; i < trunkHeight; ++i) {
        vector<string> trunk(levels, " ");
        trunk.push_back("\033[33m||");
        tree.push_back(trunk);
    }

    return tree;
}


void displayTree(const vector<vector<string>>& tree, const vector<pair<int, int>>& toy) {
    clearScreen();

    for (int i = 0; i < tree.size(); ++i) {
        for (int j = 0; j < tree[i].size(); ++j) {
            bool isOrnament = false;


            for (auto& toy : toy) {
                if (toy.first == i && toy.second == j) {
                    cout << getRandomtoy();
                    isOrnament = true;
                    break;
                }
            }

            if (!isOrnament) {
                cout << tree[i][j];
            }
        }
        cout << endl;
    }
}

// Функція для запису ялинки в файл
void saveTreeToFile(const vector<vector<string>>& tree) {
    ofstream file("christmas_tree.txt");
    if (file.is_open()) {
        for (const auto& row : tree) {
            for (const auto& symbol : row) {

                if (symbol.find("\033") == string::npos) {
                    file << symbol;
                }
                else {
                    file << "*";
                }
            }
            file << endl;
        }
        file.close();
        cout << "Cool ylunka!" << endl;
    }
    else {
        cerr << "Error. Nit cool ylunka" << endl;
    }
}

int main() {
    srand(time(0));


    int h;
    cout << " Enter h ";
    cin >> h;

    vector<pair<int, int>> toy;
    vector<vector<string>> tree = createTree(h, toy);
    int iterations = 20;
    while (iterations--) {
        displayTree(tree, toy);
        this_thread::sleep_for(chrono::seconds(1));
    }

    saveTreeToFile(tree);

    return 0;
}