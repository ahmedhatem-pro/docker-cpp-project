#include <iostream>
#include <cstdlib>
#include <string>

int main()
{
    const char *user = std::getenv("APP_USER");
    const char *pass = std::getenv("APP_PASS");

    if (!user || !pass)
    {
        std::cerr << "ERROR: Environment variables APP_USER and APP_PASS must be set.\n";
        return 1;
    }

    std::string expectedUser = "Ahmed";
    std::string expectedPass = "1234";

    if (user == expectedUser && pass == expectedPass)
    {
        std::cout << "Access granted! \n";
        std::cout << "Welcome, " << user << "!\n";
    }
    else
    {
        std::cerr << "Access denied! Invalid credentials.\n";
        return 1;
    }

    return 0;
}
