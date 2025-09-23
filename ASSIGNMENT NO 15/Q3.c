//3. Write a program to create an array for 10 players. For each player store name, no. of
//matches played, runs, wickets takes.
//a. Create function to Accept the information of each player.
//b. Create function to display the information of all the players
//c. Display the information of player who made maximum runs and the one who took
//maximum number of wickets.
#include <stdio.h>
#include <string.h>

// Structure definition
typedef struct Player {
    char name[50];
    int matchesPlayed;
    int runs;
    int wicketsTaken;
} Player;


void acceptPlayerInfo(Player players[], int numPlayers);
void displayAllPlayers(Player players[], int numPlayers);
void displayMaxsPlayers(Player players[], int numPlayers);

void main()
 {
    Player players[10];    
    int numPlayers = 10;   

    acceptPlayerInfo(players, numPlayers);     
    displayAllPlayers(players, numPlayers);    
    displayMaxsPlayers(players, numPlayers);

    
}

// Function to accept player info
void acceptPlayerInfo(Player players[], int numPlayers)
 {
    printf("Enter information for %d players:\n", numPlayers);
    
    for (int i = 0; i < numPlayers; i++) 
	{
        printf("\nPlayer %d:\n", i + 1);
        printf("enter the Player name\n");
        scanf("%s", players[i].name);
        printf("How many matches play\n");
        scanf("%d", &players[i].matchesPlayed);
        printf("Players run\n");
        scanf("%d", &players[i].runs);
        printf("how many wickets Taken\n");
        scanf("%d", &players[i].wicketsTaken);
    }
}

// Function to display all players
void displayAllPlayers(Player players[], int numPlayers)
 {
    printf("\n--- Player Information ---\n");
    for (int i = 0; i < numPlayers; i++) 
	{
        printf("\nPlayer %d:\n", i + 1);
        printf("Name: %s\n", players[i].name);
        printf("Matches Played: %d\n", players[i].matchesPlayed);
        printf("Runs: %d\n", players[i].runs);
        printf("Wickets Taken: %d\n", players[i].wicketsTaken);
    }
}

// Function to display players with max runs & wickets
void displayMaxsPlayers(Player players[], int numPlayers)
 {

    int maxRunsIndex = 0;
    int maxWicketsIndex = 0;

    for (int i = 1; i < numPlayers; i++)
	 {
        if (players[i].runs > players[maxRunsIndex].runs) 
		{
            maxRunsIndex = i;
        }
        if (players[i].wicketsTaken > players[maxWicketsIndex].wicketsTaken) 
		{
            maxWicketsIndex = i;
        }
    }

    printf("\n--- Player with Maximum Runs ---\n");
    printf("Name: %s\n", players[maxRunsIndex].name);
    printf("Runs: %d\n", players[maxRunsIndex].runs);

    printf("\n--- Player with Maximum Wickets ---\n");
    printf("Name: %s\n", players[maxWicketsIndex].name);
    printf("Wickets Taken: %d\n", players[maxWicketsIndex].wicketsTaken);
}