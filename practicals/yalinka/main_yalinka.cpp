#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <cstdlib>
#include <fstream>

using namespace std;

// Функція для генерації випадкового кольору
string getRandomColor() {
    vector<string> colors = { "\033[31m", "\033[34m", "\033[33m", "\033[35m", "\033[36m" };
    return colors[rand() % colors.size()];  // Повертаємо випадковий колір
}

// Функція для генерації випадкової іграшки (лише символ)
string getRandomtoySymbol() {
    vector<string> toySymbols = { "@", "%", "#", "&", "+" };
    return toySymbols[rand() % toySymbols.size()];  // Повертаємо символ іграшки
}

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Функція для створення дерева з рівнями іграшок
vector<vector<string>> createTree(int levels, vector<pair<int, int>>& toy, vector<string>& toySymbols) {
    vector<vector<string>> tree;
    int totalRows = 0;
    for (int level = 1; level <= levels; ++level) {
        for (int row = 0; row < level + 1; ++row) {
            int stars = 2 * row + 1;
            int spaces = levels - row;

            vector<string> currentRow;

            // Додаємо пробіли зліва
            for (int i = 0; i < spaces; ++i) {
                currentRow.push_back(" ");
            }

            // Генеруємо зірочки або іграшки
            for (int i = 0; i < stars; ++i) {
                if (rand() % 6 == 0) {  // Випадково генеруємо іграшку
                    string randomToySymbol = getRandomtoySymbol();  // Лише символ іграшки
                    currentRow.push_back(randomToySymbol);
                    toy.push_back({ totalRows, static_cast<int>(currentRow.size()) - 1 });
                    toySymbols.push_back(randomToySymbol);  // Зберігаємо символ іграшки
                }
                else {
                    currentRow.push_back("\033[32m*");  // Звичайні зірочки
                }
            }

            // Додаємо пробіли справа
            for (int i = 0; i < spaces; ++i) {
                currentRow.push_back(" ");
            }

            tree.push_back(currentRow);
            ++totalRows;
        }
    }

    // Створюємо стовбур дерева
    int trunkHeight = 2;
    for (int i = 0; i < trunkHeight; ++i) {
        vector<string> trunk(levels, " ");
        trunk.push_back("\033[33m||");
        tree.push_back(trunk);
    }

    return tree;
}

// Функція для відображення дерева з фіксованими символами іграшок, але змінними кольорами
void displayTree(const vector<vector<string>>& tree, const vector<pair<int, int>>& toy, const vector<string>& toySymbols) {
    clearScreen();

    for (int i = 0; i < tree.size(); ++i) {
        for (int j = 0; j < tree[i].size(); ++j) {
            bool isOrnament = false;

            // Перевіряємо чи є іграшка на поточній позиції
            for (size_t k = 0; k < toy.size(); ++k) {
                if (toy[k].first == i && toy[k].second == j) {
                    cout << getRandomColor() << toySymbols[k];  // Виводимо символ іграшки з новим випадковим кольором
                    isOrnament = true;
                    break;
                }
            }

            if (!isOrnament) {
                cout << tree[i][j];  // Виводимо дерево
            }
        }
        cout << endl;
    }
}

// Функція для збереження дерева в файл
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
    cout << "Enter h: ";
    cin >> h;

    vector<pair<int, int>> toy;  // Позиції іграшок
    vector<string> toySymbols;   // Символи іграшок
    vector<vector<string>> tree = createTree(h, toy, toySymbols);  // Створюємо дерево

    int iterations = 20;
    while (iterations--) {
        displayTree(tree, toy, toySymbols);  // Відображаємо дерево зі змінними кольорами іграшок
        this_thread::sleep_for(chrono::seconds(1));
    }

    saveTreeToFile(tree);

    return 0;
}
