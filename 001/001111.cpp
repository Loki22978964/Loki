#include <iostream>
#include <stdexcept>

struct code_exception : public std::exception{
    std::string name;
    int line;
    code_exception(std::string nam , int lin) : name(nam) , line(lin)   {}

     virtual  const char* what()const throw(){
        static std::string message = name + "(" + std::to_string(line) + "): Error.";
        // std::cout << name << "(" << line << "):Error." << std::endl;
        return message.c_str();
    }

};

int main() {
   std::string file;
   int line;
   std::cout << "Enter file: ";
   std::cin >> file;
   std::cout << "Enter line: ";
   std::cin >> line;
   try {
       throw code_exception{file, line};
   }
   catch (const std::exception& e) {
       std::cout << e.what() << std::endl;
   }
   catch (...) {
       std::cout << "Unknown error." << std::endl;
   }
   return 0;
}