//
// Created by Pravin More on 12/11/2025.
//

#include <iostream>
#include <string>
using namespace std;

// Structure to represent a player
struct Player {
    string name;
    int health;
    int score;
    float positionX;
    float positionY;
    bool isAlive;
    char level;

    // Default constructor initializing all fields
    Player()
        : name("Unnamed"), health(100), score(0),
          positionX(0.0f), positionY(0.0f),
          isAlive(true), level('A') {}
};

int main() {
    cout << "=== C++ Variables & Memory Practice Program ===\n\n";

    int playerCount;
    cout << "Enter number of players (1-5): ";
    cin >> playerCount;

    // Limit the number of players
    if (playerCount < 1) playerCount = 1;
    if (playerCount > 5) playerCount = 5;

    Player players[5]; // can store up to 5 players

    // Input data for each player
    for (int i = 0; i < playerCount; i++) {
        cout << "\n--- Enter details for Player " << (i + 1) << " ---\n";
        cout << "Enter player name: ";
        cin >> players[i].name;

        cout << "Enter starting health: ";
        cin >> players[i].health;

        cout << "Enter starting level (A-Z): ";
        cin >> players[i].level;

        cout << "Enter starting X position: ";
        cin >> players[i].positionX;

        cout << "Enter starting Y position: ";
        cin >> players[i].positionY;

        // Initialize score and alive status
        players[i].score = 0;
        players[i].isAlive = true;
    }

    cout << "\n=== Initial Player Info ===\n";
    for (int i = 0; i < playerCount; i++) {
        cout << "\nPlayer " << (i + 1) << ":\n";
        cout << "Name: " << players[i].name << endl;
        cout << "Health: " << players[i].health << endl;
        cout << "Score: " << players[i].score << endl;
        cout << "Position: (" << players[i].positionX << ", " << players[i].positionY << ")\n";
        cout << "Alive: " << (players[i].isAlive ? "Yes" : "No") << endl;
        cout << "Level: " << players[i].level << endl;

        // Display memory addresses of variables
        cout << "\n-- Memory Addresses --\n";
        cout << "&name: " << &players[i].name << endl;
        cout << "&health: " << &players[i].health << endl;
        cout << "&score: " << &players[i].score << endl;
        cout << "&positionX: " << &players[i].positionX << endl;
        cout << "&isAlive: " << &players[i].isAlive << endl;
//      cout << "&level: " << (void*)&players[i].level << endl;
        cout << "&level: " << static_cast<void*>(&players[i].level) << endl;

    }

    // Simulate taking damage
    cout << "\n=== Simulate Player Damage ===\n";
    for (int i = 0; i < playerCount; i++) {
        int damage;
        cout << "Enter damage for " << players[i].name << ": ";
        cin >> damage;

        players[i].health -= damage;

        // Increase score when taking damage (for demo)
        players[i].score += damage * 10;

        if (players[i].health <= 0) {
            players[i].health = 0;
            players[i].isAlive = false;
        }
    }

    // Final report
    cout << "\n=== Final Player Status ===\n";
    for (int i = 0; i < playerCount; i++) {
        cout << "\nPlayer " << (i + 1) << ":\n";
        cout << "Name: " << players[i].name << endl;
        cout << "Health: " << players[i].health << endl;
        cout << "Score: " << players[i].score << endl;
        cout << "Position: (" << players[i].positionX << ", " << players[i].positionY << ")\n";
        cout << "Alive: " << (players[i].isAlive ? "Yes" : "No") << endl;
        cout << "Level: " << players[i].level << endl;
    }

    cout << "\n=== Program End ===" << endl;
    return 0;
}
