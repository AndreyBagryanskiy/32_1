#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include"nlohmann/json.hpp"
#include<ctime>
#include<iomanip>

struct film
{
    std::string filmName;
    std::string Country;
    std::string directedBy;
    int age;
    bool married;
};

int main(){
    std::time_t t = std::time(nullptr);
    std::tm local = *std::localtime(&t);

    std::ofstream file("film.json");
    nlohmann::json film;
    film["date"] = std::asctime(&local);
    

    file << film;
    file.close();
    /*
    Record record;
    std::cin >> record.name >> record.family >> record.age >> record.married;
    std::ofstream file("record.json");
    nlohmann::json dict;
    dict["name"] = record.name;
    dict["family"] = record.family;
    dict["age"] = record.age;
    dict["married"] = record.married;
    file << dict; */
}