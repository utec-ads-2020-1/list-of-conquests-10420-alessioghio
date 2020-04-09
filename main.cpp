#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;

int main(){
    string input, country;
    stringstream ss;
    int iter;
    bool existsOnMap;
    map<string, int> countryCount;
    
    getline(cin, input);
    ss.str(input);
    ss >> iter;
    ss.clear();

    for (int i = 0; i < iter; i++){
        getline(cin, input);
        ss.str(input);
        ss >> country;
        ss.clear();
        existsOnMap = countryCount.find(country) != countryCount.end();
        if(existsOnMap){
            countryCount[country] += 1;
        }else{
            countryCount.insert(make_pair(country, 1));
        }
    }
    for(auto it = countryCount.begin(); it != countryCount.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }
    
    return EXIT_SUCCESS;
}