#include <iostream>
#include <map>
#include <string>
#include <cmath>

using namespace std;

int getMin(map<string, int> const& largerTeam, map<string, int> const& smallerTeam, int totalCards)
{
  int maxCardsLargerTeam = largerTeam.at("numPlayers") * (largerTeam.at("limit") - 1);
  int maxCardsSmallerTeam = smallerTeam.at("numPlayers") * (smallerTeam.at("limit") - 1);

  int maxCardsThreshhold = maxCardsLargerTeam + maxCardsSmallerTeam;

  int numPlayersToEliminate = totalCards - maxCardsThreshhold;

  int totalPlayers = largerTeam.at("numPlayers") + smallerTeam.at("numPlayers");

  if(numPlayersToEliminate < 0)
  {
    return 0;
  }
  else if(numPlayersToEliminate > totalPlayers)
  {
    return totalPlayers;
  }
  else
  {
    return numPlayersToEliminate;
  }
}


int getMax(map<string, int> const& largerTeam, map<string, int> const& smallerTeam, int totalCards)
{
  int totalPlayersEliminated = 0;

  int numPlayersOfSmallerTeamToEliminate = min(totalCards / smallerTeam.at("limit"), smallerTeam.at("numPlayers"));
  totalPlayersEliminated += numPlayersOfSmallerTeamToEliminate;
  totalCards -= numPlayersOfSmallerTeamToEliminate * smallerTeam.at("limit");

  int numPlayersOfLargerTeamToEliminate = min(totalCards / largerTeam.at("limit"), largerTeam.at("numPlayers"));
  totalPlayersEliminated += numPlayersOfLargerTeamToEliminate;
  
  return totalPlayersEliminated;
}

int main()
{
  int numPlayers1, numPlayers2, limit1, limit2, numDistributed;
  cin >> numPlayers1 >> numPlayers2 >> limit1 >> limit2 >> numDistributed;

  map<string, int> largerTeam, smallerTeam;

  if(limit1 > limit2) {
    largerTeam.insert(pair<string, int>("numPlayers", numPlayers1));
    largerTeam.insert(pair<string, int>("limit", limit1));

    smallerTeam.insert(pair<string, int>("numPlayers", numPlayers2));
    smallerTeam.insert(pair<string, int>("limit", limit2));
  }
  else
  {
    largerTeam.insert(pair<string, int>("numPlayers", numPlayers2));
    largerTeam.insert(pair<string, int>("limit", limit2));

    smallerTeam.insert(pair<string, int>("numPlayers", numPlayers1));
    smallerTeam.insert(pair<string, int>("limit", limit1));
  }
  
  cout << getMin(largerTeam, smallerTeam, numDistributed) << " " << getMax(largerTeam, smallerTeam, numDistributed);

  return 0;
}