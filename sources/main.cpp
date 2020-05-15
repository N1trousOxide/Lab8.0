//Copyright 2020 <ZaitsevGames & N1trousOxide & yurygavrilov47>

#include <client.h>

int main() {
    std::string username;
    std::getline(std::cin, username);
    Client client(username);
    return 0;
}
