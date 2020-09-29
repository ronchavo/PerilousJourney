// PerJourV1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <cstdlib>

#include <time.h>

#include <string>




using namespace std;

int rollDie()
{
    int roll;
    int min = 1; // the min number a die can roll is 1
    int max = 6;// this->dieSize; // the max value is the die size

    roll = rand() % (max - min + 1) + min;

    return roll;
}

int pickVil()
{
    int roll;
    int min = 0; // the min number a die can roll is 1
    int max = 4;// this->dieSize; // the max value is the die size

    roll = rand() % (max - min + 1) + min;

    return roll;
}

int pickItem()
{
    int roll;
    int min = 0; // the min number a die can roll is 1
    int max = 9;// this->dieSize; // the max value is the die size

    roll = rand() % (max - min + 1) + min;

    return roll;
}

//string specialItems[10] = { "Food","Amour", "StarPendant", "Gem", "Key", "Shield", "FortuneTeller", "Compass", "HealthPotion", "Sword" };
int findValue(int specWhat) {
    int specValue;
    switch (specWhat) {
    case 0:
        specValue = 2;
        break;
    case 1:
        specValue = 4;
        break;
    case 2:
        specValue = 6;
        break;
    case 3:
        specValue = 0;
        break;
    case 4:
        specValue = 0;
        break;
    case 5:
        specValue = 4;
        break;
    case 6:
        specValue = 8;
        break;
    case 7:
        specValue = 0;
        break;
    case 8:
        specValue = 3;
        break;
    case 9:
        specValue = 5;
        break;
    default:
        specValue = 22;
        
    };
    return specValue;
}

class charProfile {
public:
    string jourName;
    string charType[4] = { "Trainee","Knight","Wizard","Villian" };
    string charSelect;
    int charStrength;
    int battleForce;
    string specItem[10] = { "","", "", "", "", "", "", "", "", "", };
    int plusForce;

    bool invenEmpty()
    {
        int y = 0;
        while (y < 10)
        {
            if (specItem[y] != "")
            {
                return false;
                break;
            }
            y++;

        }
        return true;
    }
};


class vilProfile {
public:
    string vilName;
    string vilType[5] = { "Witch","Wolf","Wizard","Loki","Dragon" };
    // string charSelect;
    int vilStrength;
    int battleForce;
};




int main()
{
    //std::cout << "Hello World!\n";

    rerun:
                       
    cout <<  "\n"
        "--------------------------------------------------------------------------" << "\n"
        "\n"
        "Welcome to Your...\n"
        "\n"
        "\n"
        "-__ /\\\\                 ,,                   \n"
        "  ||  \\\\              ' ||                   \n"
        " /||__||  _-_  ,._-_ \\\\ ||  /'\\\\ \\\\ \\\\  _-_, \n"
        " \\||__|| || \\\\  ||   || || || || || || ||_.  \n"
        "  ||  |, ||/    ||   || || || || || ||  ~ || \n"
        "_-||-_/  \\\\,/   \\\\,  \\\\ \\\\ \\\\,/  \\\\/\\\\ ,-_-  \n"
        "  ||                                         \n"
        "                                             \n"
        "                                            \n"
        " _-_,,                                      \n"
        "(  //                                       \n"
        "  _||   /'\\\\ \\\\ \\\\ ,._-_ \\\\/\\\\  _-_  '\\\\/\\\\ \n"
        "  _||  || || || ||  ||   || || || \\\\  || ;' \n"
        "   ||  || || || ||  ||   || || ||/    ||/   \n"
        "-__-,  \\\\,/  \\\\/\\\\  \\\\,  \\\\ \\\\ \\\\,/   |/    \n"
        "                                     (      \n"
        "                                      -_-   \n"
        "\n"
        "--------------------------------------------------------------------------" << "\n"
        "\n"
        "Program & Story by Robert Chavez" << "\n"
        "Completed 2020" << "\n"
        "Pickering, Ontario, Canada" << "\n"
        "Contact: robchavez78@gmail.com" << "\n"
        "\n"
        "--------------------------------------------------------------------------" << "\n"
        "\n"
        "\n"
        "Please Enter Your Journey Name:"
        "\n"
        "\n";

    
    //string jourName;
    
    
    vilProfile Vil1;
    Vil1.vilType[0];
    Vil1.vilStrength = 10;

    vilProfile Vil2;
    Vil2.vilType[1];
    Vil2.vilStrength = 6;

    vilProfile Vil3;
    Vil3.vilType[2];
    Vil3.vilStrength = 10;

    vilProfile Vil4;
    Vil4.vilType[3];
    Vil4.vilStrength = 4;

    vilProfile Vil5;
    Vil5.vilType[4];
    Vil5.vilStrength = 8;

    charProfile Player1;
    
    cin >> Player1.jourName;

    //cout << "\n"
    //    "\n";
 //       "You have chosen the Journey Name of " << Player1.jourName << "\n"
 //       "\n"
 //       "\n";
    
    
    int playSelection;
    do {    
        cout << "\n"
        "Hello " << Player1.jourName << ". Please select your Character Type:" << "\n";
        cout << Player1.charType[0] << " [0]" << "\n";
        cout << Player1.charType[1] << " [1]" << "\n";
        cout << Player1.charType[2] << " [2]" << "\n";
        cin >> playSelection;
    }

    while (playSelection > 2 || playSelection < 0);
  
    Player1.charSelect = Player1.charType[playSelection];
    cout << endl;
    cout << "Your character select was " << Player1.charSelect << "\n"
        "\n"; 

    cout << "Please roll the 'dice' to decide your Character Strength" <<"\n";
    system("PAUSE");

  
 srand(time(0));
 //   for (int i = 0;i < 1; i++)
//
    Player1.charStrength = rollDie();
  
    cout << "You have rolled a: " << Player1.charStrength << "\n"
        "\n"
        "Your character profile is as follows..."
        "\n"
        "Journey Name: " << Player1.jourName << "\n"
        "Rank: " << Player1.charSelect << "\n"
        "Strength: " << Player1.charStrength << "\n"     
        "\n"     
        "YOU ARE NOW READY TO BEGIN YOUR PERILOUS JOURNEY!!!" << "\n"
        "\n";
        system("PAUSE");

        cout << endl;
        cout << "Your village of Aswell is on the brink of destruction. The magic ORB has been stolen!" << "\n"
            "It has supplied your village with balance; keeping the crops growing a plenty, enabling" << "\n"
            "the water to flow, and warding off harsh weather. It's been months since vegetation has" << "\n"
            "thrived, the wells have dried up, and the wind has been bitter. Villagers are" << "\n"
            "starving and reacting desperately; robbing and killing one another for any supplies." << "\n"
            "You have no choice but to venture out into the countryside and search for Zerb's " << "\n"
            "castle and face the winged Count. It is Count Zerb who distpatched the theives" << "\n"
            "that took your villages' precious lifeline. You MUST retrieve the ORB and bring it back to the" << "\n"
            "village to restore balance. You are armed only with your wits. You will encounter dire" << "\n"
            "situations and agents of evil." << "\n"
            "GOOD LUCK." << "\n";

    string travelRoute[43] = { "Start","Safe","enemy","Safe","Special","Village","Safe","CheckPoint1","enemy","Safe","Special"\
        ,"Safe", "enemy","Safe","CheckPoint1","Special","Water","enemy","ZWoods","Special","enemy"\
        ,"Boar", "ZStarBrid", "ZCave", "CheckPoint1", "enemy", "Special", "Safe", "enemy", "ZCryCas", "Safe" \
        , "enemy", "Safe", "Special", "enemy", "Safe", "CheckPoint1", "Safe", "ZCath", "enemy", "Special"\
        , "Safe", "orb" };
    
    //travelRoute[0] = "Start";

    string specialItems[10] = {"Food","Amour", "StarPendant", "Gem", "Key", "Shield", "FortuneTeller", "Compass", "HealthPotion", "Sword"};


    int rollTell;
    int rollCount;
    int travelCord;
    travelCord = 0;
    rollCount = 0;

    cout << endl;
    cout << "You are currently at the " << travelRoute[travelCord] << " of the game.  Please roll the dice to continue" << "\n";
    system("PAUSE"); 

    cout << "\n"
        << "\n"
        "******************** DEATH IS BUT A DOORWAY, TIME IS BUT A WINDOW ********************" << "\n"
        << "\n"
        << "\n";
    
    while (travelCord < 42) {

        rollTell = rollDie();
        travelCord = travelCord + rollTell;
  
        if (travelCord > 42) {
            travelCord = 42;
        }
        //TEST
        //travelCord = 22; //Test - Move player to the zone you would like!!

        cout << endl;
        cout << "You rolled a " << rollTell << ". You are now on Zone " << travelCord << "." << "\n";
            if (travelRoute[travelCord] == "Safe") {
                cout << "It is a Safe space" << "\n";
            }
            if (travelRoute[travelCord] == "CheckPoint1") {
                cout << "You have reached a Check Point!  Now is good time to rest; resume travel at dawn." << "\n";
            }
            //if (travelRoute[travelCord] == "enemy") {
            //    cout << "You begin to feel the hair stand up on the back of your neck" << "\n";
            //}
            //if (travelRoute[travelCord] == "Special") {
            //    cout << "You have found a Special item!" << "\n";
            //}
            //if (travelRoute[travelCord] == "CheckPoint1") {
            //    cout << "You have reached a Check Point!" << "\n";
            //}
            //else {
            //    cout << "It's space is a " << travelRoute[travelCord] << "\n";
            //}
            "\n";
        //system("PAUSE");

       /* if (travelRoute[travelCord] != "enemy" && travelRoute[travelCord] != "Special")
        {
            cout << "PLEASE ROLL THE DICE ZZZZ AGAIN" << "\n";
            system("PAUSE");
        }
        */

        if (travelRoute[travelCord] == "Water")
        {
            cout << "\n"
                "You are dying of thrist; you get side-tracked looking for a well or river source. " << "\n"
                "Your Character Strength looses 1 point." << "\n";
            Player1.charStrength = Player1.charStrength - 1;
            cout << "\n"
                "Your Character Strength is now: " << Player1.charStrength << "\n";
            //system("PAUSE");
        }

        if (travelRoute[travelCord] == "Boar")
        {
            cout << "\n"
                "You managed to trap a Wild Boar.  You find a shelter for the evening and prepare a feast as it has been" << "\n"
                "days since you've had a proper meal." << "\n"
                "Your Character Strength gains 3 points." << "\n";
            Player1.charStrength = Player1.charStrength + 3;
            cout << "\n"
                "Your Character Strength is now: " << Player1.charStrength << "\n";
            //system("PAUSE");
        }

        if (travelRoute[travelCord] == "Village")
        {
            //Player1.specItem[0] = "StarPendant"; //TEST
            int z = 0;
            int outRoll = 0;
            bool outItem = false;
            for (int z = 0; z < 10; z++) {
                if (Player1.specItem[z] == "StarPendant") {
                    outItem = true;
                    break; // Need this break to stop from fill full array
                }
            }

            if (outItem == true) {
                //for testing
                //cout << "test:" << outItem << "\n";
                cout << "\n"
                    "You have entered the Village of Grey Stone; as you walk towards the square you begin to feel " << "\n"
                    "the eyes of the locals on you. Quickly you duck into an alley where you come across a store " << "\n"
                    "entrance.  You enter and encounter an old man across a counter." << "\n"
                    "He's the local Wise Man and tells you that if you have the Gem you should place it on the Mantel." << "\n"
                    "Puzzeled you leave the store and head down the alley existing the village thru the North." << "\n";
                //system("PAUSE");

            }

            else {
                char userResp;
                do
                {
                    //for testing
                    //cout << "test:" << outItem << "\n";
                    cout << "\n"
                        "You have entered the Village of Grey Stone; as you walk towards the square you begin to feel" << "\n"
                        "the eyes of the locals on you." << "\n"
                        "Would you like to leave the village quickly? [y/n]";
                    cin >> userResp;
                } while (!cin.fail() && userResp != 'y' && userResp != 'n');

                if (userResp == 'n') {
                    cout << "\n"
                        "Quickly you duck into an alley where you come across a store entrance.  You enter " << "\n"
                        "and encounter an old man across a counter. He is the local Wise Man and senses you are on "<< "\n"
                        "a quest.  He digs into his pocket and lays a Star Pendant on the counter.  " << "\n"
                        "Puzzeled you take the item and thank the old man. You calmly leave the store and exit the village." << "\n";
                    for (int v = 0; v < 10; v++) {
                        if (Player1.specItem[v] == "") {
                            Player1.specItem[v] = "StarPendant";
                            //system("PAUSE");
                            break;
                        }

                        break;
                    }
                }
                else {
                    //for testing
                    //cout << "test:" << outItem << "\n";
                    cout << "\n"
                        "You pull the hood from you cloak over you head and quickly leave thru North exit of the village." << "\n";
                    //system("PAUSE");
                }
      
            }
        }

        if (travelRoute[travelCord] == "ZWoods") 
        {
            //Player1.specItem[0] = "Compass"; //TEST
            int z = 0;
            int outRoll = 0;
            bool outItem = false;
            for (int z = 0; z < 10; z++) {
                if (Player1.specItem[z] == "Compass") {
                    outItem = true;
                    break; // Need this break to stop from fill full array
                }
            }

            if (outItem == false) {
                //for testing
                //cout << "test:" << outItem << "\n";
                cout << "\n"
                    "You have entered the dark woods without a compass.  You are now lost" << "\n"
                    "You must now roll a 2 or 4 to find your way out" << "\n"   
                    << "\n";
                    
                for (int r = 0; r < 2; r++) {
                    system("PAUSE");
                    outRoll = rollDie();
                    cout << "\n"
                        "Your Roll Count is: " << r + 1 << "\n"
                         << "\n"
                        "You have rolled a " << outRoll << "\n"
                        << "\n";

                    if (outRoll == 2 || outRoll == 4) {
                        cout << "\n"
                            "You have found a way out of the forest.  You live to see another day!" << "\n"
                            << "\n";
                        //system("PAUSE");
                        break;
                    }
                    
                    if (r == 1) {
                        cout << "\n"
                            "You have spent too much time in the forest; You have managed to stay alive and " << "\n"
                            "find a way out but your strength has decreased by 1 point" << "\n";
                        Player1.charStrength = Player1.charStrength - 1;
                        cout << "\n"
                            "Your Character Strength is now " <<Player1.charStrength << "\n"
                            << "\n";
                        //system("PAUSE");
                        break;
                    }
                 
                }

            }

            else { 
                char userResp;
                do
                {
                    //for testing
                    //cout << "test:" << outItem << "\n";
                    cout << "\n"
                        "Searching for a shortcut to the North East passage, you've decided to enter the Woods." << "\n"
                        "The sun is setting and you are now lost" << "\n"
                        << "\n"
                        "Would you like to use your Compass to find your way out of the forest? [y/n]";
                    cin >> userResp;
                } while (!cin.fail() && userResp != 'y' && userResp != 'n');

                if (userResp == 'y') {
                    for (int z = 0; z < 10; z++) {
                        if (Player1.specItem[z] == "Compass") {
                            Player1.specItem[z] = "";
                            cout << "\n"
                                "Your Compass has shown you the way out" << "\n";
                            //system("PAUSE");
                            break;
                        }
                    }
                }
                else {
                    //for testing
                    //cout <<"Fail"<< "\n";
                    //cout << "\n"
                    //    "test: " << outItem << "\n";
                    cout << "\n"
                        "You have decided to NOT use your Compass.  You are now lost" << "\n"
                        "You must now roll a 2 or 4 to find your way out" << "\n"
                        << "\n";

                    for (int r = 0; r < 2; r++) {
                        system("PAUSE");
                        outRoll = rollDie();
                        cout << "\n"
                            "Your Roll Count is: " << r + 1<<  "\n"
                        << "\n"
                            "You have rolled a " << outRoll << "\n"
                        << "\n";

                        if (outRoll == 2 || outRoll == 4) {
                            cout << "\n"
                                "You have found a way out of the forest.  You live to see another day!" << "\n"
                                << "\n";
                            //system("PAUSE");
                            break;
                        }

                        if (r == 1) {
                            cout << "\n"
                                "You have spent too much time in the forest; You have managed to stay alive and " << "\n"
                                "find a way out but your strength has decreased by 1 point" << "\n";
                            Player1.charStrength = Player1.charStrength - 1;
                            cout << "\n"
                                "Your Character Strength is now " << Player1.charStrength << "\n"
                                << "\n";
                            //system("PAUSE");
                            break;
                        }

                    }

                }
                

            }
        }

        if (travelRoute[travelCord] == "ZCave")
        {
            //Player1.specItem[0] = "Food"; //TEST
            int z = 0;
            int outRoll = 0;
            bool outItem = false;
            for (int z = 0; z < 10; z++) {
                if (Player1.specItem[z] == "Food") {
                    outItem = true;
                    break; // Need this break to stop from fill full array
                }
            }

            if (outItem == false) {
                //for testing
                //cout << "test:" << outItem << "\n";
                cout << "\n"
                    "You have entered the dark Cave.  You are now lost" << "\n"
                    "You must now roll a 2 or 4 to find your way out" << "\n"
                    << "\n";



                for (int r = 0; r < 2; r++) {
                    system("PAUSE");
                    outRoll = rollDie();
                    cout << "\n"
                        "Your Roll Count is: " << r + 1 << "\n"
                    << "\n"
                        "You have rolled a " << outRoll << "\n"
                    << "\n";

                    if (outRoll == 2 || outRoll == 4) {
                        cout << "\n"
                            "You have found a way out of the cave.  You live to see another day!" << "\n"
                            << "\n";
                        //system("PAUSE");
                        break;
                    }

                    if (r == 1) {
                        cout << "\n"
                            "You have spent too much time in the Cave; You have managed to stay alive but low on energy. " << "\n"
                            "You have found a way out but your strength has decreased by 1 point" << "\n";
                        Player1.charStrength = Player1.charStrength - 1;
                        cout << "\n"
                            "Your Character Strength is now " << Player1.charStrength << "\n"
                            << "\n";
                        //system("PAUSE");
                        break;
                    }

                }

            }

            else {
                char userResp;
                do
                {
                    //for testing
                    //cout << "test:" << outItem << "\n";
                    cout << "\n"
                        "You have entered a dark Cave.  Would you like to use your Food to boost " << "\n"
                        "your strength and find your way out quickly? [y/n]";
                    cin >> userResp;
                } while (!cin.fail() && userResp != 'y' && userResp != 'n');

                if (userResp == 'y') {
                    for (int z = 0; z < 10; z++) {
                        if (Player1.specItem[z] == "Food") {
                            Player1.specItem[z] = "";
                            cout << "\n"
                                 "Your Food has helped keep your morale and energy high;  You have found a way out!" << "\n"
                                << "\n";
                            //system("PAUSE");
                            break;
                        }
                    }
                }
                else {
                    //for testing
                    //cout << "Fail" << "\n";
                    //cout << "test:" << outItem << "\n";
                    cout << "\n"
                        "You have decided to NOT use your Food.  Your morale and energy is very low." << "\n"
                        "You must now roll a 2 or 4 to find your way out" << "\n"
                        << "\n";

                    for (int r = 0; r < 2; r++) {
                        system("PAUSE");
                        outRoll = rollDie();
                        cout << "\n"
                            "Your Roll Count is: " << r + 1<< "."<< "\n"
                            << "\n"
                            "You have rolled a " << outRoll << "\n"
                            << "\n";

                        if (outRoll == 2 || outRoll == 4) {
                            cout << "\n"
                                "You have found a way out of the cave.  You live to see another day!" << "\n"
                                << "\n";
                            //system("PAUSE");
                            break;
                        }

                        if (r == 1) {
                            cout << "\n"
                                "You have spent too much time in the Cave; You have managed to stay alive but low on energy. " << "\n"
                                "You find a way out but your strength has decreased by 1 point" << "\n";
                            Player1.charStrength = Player1.charStrength - 1;
                            cout << "\n"
                                "Your Character Strength is now " << Player1.charStrength << "\n"
                                << "\n";
                            //system("PAUSE");
                            break;
                        }

                    }

                }

            }
        }

        if (travelRoute[travelCord] == "ZCath")
        {
            //Player1.specItem[0] = "Key"; //TEST
            int z = 0;
            int outRoll = 0;
            bool outItem = false;
            for (int z = 0; z < 10; z++) {
                if (Player1.specItem[z] == "Key") {
                    outItem = true;
                    break; // Need this break to stop from fill full array
                }
            }

            if (outItem == false) {
                //for testing
                //cout << "test:" << outItem << "\n";
                cout << "\n"
                    "You have entered an abandoned Cathedral. Searching for items that may help " << "\n"
                    "you in your quest, you get locked in the cellar." << "\n"
                    "You must now roll a 2 or 4 to find your way out" << "\n"
                    << "\n";

                /* do {
                     system("PAUSE");
                     outRoll = rollDie();
                     cout << " You have rolled a " << outRoll <<endl;
                 }

                 while (outRoll != 2 && outRoll != 4);*/

                for (int r = 0; r < 2; r++) {
                    system("PAUSE");
                    outRoll = rollDie();
                    cout << "\n"
                        "Your Roll Count is: " << r + 1 << "\n"
                    << "\n"
                        "You have rolled a " << outRoll << "\n"
                        << "\n";

                    if (outRoll == 2 || outRoll == 4) {
                        cout << "\n"
                            "You have managed to find a secret exit and escape the cellar as you hear footsteps coming " << "\n"
                            "from the opposite direction. You leave the Cathedral and live to see another day!" << "\n"
                            << "\n";
                        //system("PAUSE");
                        break;
                    }

                    if (r == 1) {
                        cout << "\n"
                            "You have spent too much time in the Cathedral; You have managed to find a secret exit but " << "\n"
                            "exhasted your engery dismantling a stone wall. Your strength has decreased by 1 point" << "\n"
                            << "\n";
                        Player1.charStrength = Player1.charStrength - 1;
                        cout << "Your Character Strength is now " << Player1.charStrength << "\n";
                        //system("PAUSE");
                        break;
                    }

                }

            }

            else {
                char userResp;
                do
                {
                    //for testing
                    //cout << "test:" << outItem << "\n";
                    cout << "\n"
                        "You have entered an abandoned Cathedral. Searching for items that may help " << "\n"
                        "you in your quest, you get locked in the cellar." << "\n"  
                        "Would you like to use your Key to escape? [y/n]";
                    cin >> userResp;
                } while (!cin.fail() && userResp != 'y' && userResp != 'n');

                if (userResp == 'y') {
                    for (int z = 0; z < 10; z++) {
                        if (Player1.specItem[z] == "Key") {
                            Player1.specItem[z] = "";
                            cout << "\n"
                                "Your Key works on the cellar lock; You have found a way out and leave the Cathedral!" << "\n"
                                << "\n";
                            //system("PAUSE");
                            break;
                        }
                    }
                }
                else {
                    //for testing
                    //cout << "Fail" << "\n";
                    //cout << "test:" << outItem << "\n";
                    cout << "\n"
                        "You have decided to NOT use your Key. Your morale and energy is very low." << "\n"
                        "You must now roll a 2 or 4 to find your way out" << "\n"
                        << "\n";

                    for (int r = 0; r < 2; r++) {
                        system("PAUSE");
                        outRoll = rollDie();
                        cout << "\n"
                            "Your Roll Count Test is: " << r + 1 << "\n"
                            << "\n"
                            "You have rolled a " << outRoll << "\n"
                            << "\n";

                        if (outRoll == 2 || outRoll == 4) {
                            cout << "\n"
                                "You have managed to find a secret exit and escape the cellar as you hear footsteps coming " << "\n"
                                "from the opposite direction. You leave the Cathedral and live to see another day!" << "\n"
                                << "\n";
                            //system("PAUSE");
                            break;
                        }

                        if (r == 1) {
                            cout << "\n"
                                "You have spent too much time in the Cathedral; You have managed to find a secret exit but " << "\n"
                                "exhasted your engery dismantling a stone wall. Your strength has decreased by 1 point" << "\n";
                            Player1.charStrength = Player1.charStrength - 1;
                            cout << "\n"
                                "Your Character Strength is now " <<Player1.charStrength << "\n"
                                << "\n";
                            //system("PAUSE");
                            break;
                        }

                    }

                }

            }
        }

        if (travelRoute[travelCord] == "ZCryCas")
        {
            //Player1.specItem[0] = "Gem"; //TEST
            int z = 0;
            int outRoll = 0;
            bool outItem = false;
            for (int z = 0; z < 10; z++) {
                if (Player1.specItem[z] == "Gem") {
                    outItem = true;
                    break; // Need this break to stop from fill full array
                }
            }

            if (outItem == false) {
                //for testing
                //cout << "test:" << outItem << "\n";
                cout << "\n"
                    "You have entered the Cystal Castle. You find yourself in the Great Hall " << "\n"
                    "where the sight of a shrine puts you in a trace. " << "\n"
                    "You must now roll a 2 or 4 to gain your focus and leave." << "\n"
                    << "\n";

                for (int r = 0; r < 2; r++) {
                    system("PAUSE");
                    outRoll = rollDie();
                    cout << "\n"
                        "Your Roll Count is: " << r + 1 << "\n"
                        << "\n"
                        "You have rolled a " << outRoll << "\n"
                        << "\n";

                    if (outRoll == 2 || outRoll == 4) {
                        cout << "\n"
                            "You have managed to break the trance of the Shrine and " << "\n"
                            "gain focus. You exit the Crystal Castle and live to see another day!" << "\n"
                            << "\n";
                        //system("PAUSE");
                        break;
                    }

                    if (r == 1) {
                        cout << "\n"
                            "You have spent too much time in the Crystal Castle; You have managed to break from the trance but " << "\n"
                            "but feel disoriented. Your strength has decreased by 1 point" << "\n"
                            << "\n";
                        Player1.charStrength = Player1.charStrength - 1;
                        cout << "Your Character Strength is now " << Player1.charStrength << "\n"
                            << "\n";
                        //system("PAUSE");
                        break;
                    }

                }
            }

            else {
                char userResp;
                do
                {
                    //for testing
                    //cout << "\n"
                    //    "test:" << outItem << "\n";
                    cout << "\n"
                        "You have entered the Cystal Castle. You find yourself in the Great Hall " << "\n"
                        "where an Ice Shrine catches your attention." << "\n"
                        "Would you like to place your Gem on the alter? [y/n]";
                    cin >> userResp;
                } while (!cin.fail() && userResp != 'y' && userResp != 'n');

                if (userResp == 'y') {
                    for (int z = 0; z < 10; z++) {
                        if (Player1.specItem[z] == "Gem") {
                            Player1.specItem[z] = "";
                            cout << "\n"
                                "Placing the Gem on the Shrine opens a portal! You feel a calm come over your senses" << "\n"
                                "You enter the Portal and are transported to a Safe Zone in the North East territory." << "\n"
                                "You are now closer to the Thieves that have stolen the Orb!" << "\n";

                            travelCord = 35;
                            cout << "\n"
                                "You are now on Zone " << travelCord << "\n";
                            //system("PAUSE");
                            break;
                        }
                    }
                }
                else {
                    //for testing
                    //cout << "\n"
                    //    "Fail" << "\n"
                    //    "test:" << outItem << "\n";
                    cout << "\n"
                        "You have decided to NOT use your Gem. The Shrine puts you in a trance." << "\n"
                        "You must now roll a 2 or 4 to regain your focus" << "\n"
                        << "\n";

                    for (int r = 0; r < 2; r++) {
                        system("PAUSE");
                        outRoll = rollDie();
                        cout << "\n"
                            "Your Roll Count is: " << r + 1 << "\n"
                            << "\n"
                            "You have rolled a " << outRoll << "\n"
                            << "\n";

                        if (outRoll == 2 || outRoll == 4) {
                            cout << "\n"
                                "You have managed to break the trance of the Shrine and " << "\n"
                                "regain focus. You exit the Crystal Castle and live to see another day!" << "\n"
                                << "\n";
                            //system("PAUSE");
                            break;
                        }

                        if (r == 1) {
                            cout << "\n"
                                "You have spent too much time in the Crystal Castle; You have managed to break from the trance " << "\n"
                                "but feel disoriented.  Your strength has decreased by 1 point" << "\n"
                                << "\n";
                            Player1.charStrength = Player1.charStrength - 1;
                            cout << "Your Character Strength is now " << Player1.charStrength << "\n"
                                << "\n";
                            //system("PAUSE");
                            break;
                        }
                    }
                }
            }
        }

        if (travelRoute[travelCord] == "ZStarBrid")
        {
            //Player1.specItem[0] = "StarPendant"; //TEST
            int z = 0;
            int outRoll = 0;
            bool outItem = false;
            for (int z = 0; z < 10; z++) {
                if (Player1.specItem[z] == "StarPendant") {
                    outItem = true;
                    break; // Need this break to stop from fill full array
                }
            }

            if (outItem == false) {
                //for testing
                //cout << "\n"
                //    "test:" << outItem << "\n";
                cout << "\n"
                    "You have located the Star Bridge.  You can reduce the time it takes to enter the East Territory" << "\n"
                    "by crossing this bridge but you must now roll a 3 or 6, within two rolls, in order to move across successfully." << "\n"
                    << "\n";

                for (int r = 0; r < 2; r++) {
                    system("PAUSE");
                    outRoll = rollDie();
                    cout << "\n"
                        "Your Roll Count is: " << r + 1 << "\n";
                    cout << "\n"
                        "You have rolled a " << outRoll << "\n"
                        << "\n";

                    if (outRoll == 3 || outRoll == 6) {
                        cout << "\n"
                            "Your nevously cross the Star Bridge as boards and rope begin to separate and dissolve; " << "\n"
                            "You quickly move along, reaching the other side as the structure gives way and collaspes." << "\n"
                            "You are now in the East Territory - Congratulations!" << "\n";

                        travelCord = 27;
                        cout << "\n"
                            "You are now on Zone " << travelCord << "\n";
                        //system("PAUSE");
                        break;
                    }

                    if (r == 1) {
                        cout << "\n"
                            "Luck is not on your side, the Star Bridge is a state of disrepair and " << "\n"
                            "too dangerous to cross; you continue your journey along the mountains." << "\n";
                        //Player1.charStrength = Player1.charStrength - 1;
                        //cout << Player1.charStrength << endl;
                        //system("PAUSE");
                        break;
                    }
                }
            }

            else {
                char userResp;
                do
                {
                    //for testing
                    //cout << "\n"
                    //    "test:" << outItem << "\n";
                    cout << "\n"
                        "You have located the Star Bridge.  You can cut the time it takes to enter the East Territory " << "\n"
                        "however the bridge is in a state of disrepair.  Would you like to use your Star Pendant? [y/n]";
                    cin >> userResp;
                } while (!cin.fail() && userResp != 'y' && userResp != 'n');

                if (userResp == 'y') {
                    for (int z = 0; z < 10; z++) {
                        if (Player1.specItem[z] == "StarPendant") {
                            Player1.specItem[z] = "";
                            cout << "\n"
                                "You feel the ora of your Pendant and grab it for help as you faithfully step on the bridge." << "\n"
                                "The bridge begins to glow and strengthen with each step you take. You cross the bridge" << "\n"
                                "successfully and enter the East Territory - Congratulations!." << "\n";

                            travelCord = 27;
                            cout << "\n"
                                "You are now on Zone " << travelCord << "\n";
                            //system("PAUSE");
                            break;
                        }
                    }
                }
                else {
                    //for testing
                    //cout << "\n"
                    //    "Fail" << "\n";
                    //cout << "test:" << outItem << "\n";
                    cout << "\n"
                        "You have decided to NOT use your Pendant." << "\n"
                        "You must now roll a 3 or 6, within two rolls, in order to move across successfully." << "\n"
                        << "\n";
   
                    for (int r = 0; r < 2; r++) {
                        system("PAUSE");
                        outRoll = rollDie();
                        cout << "\n"
                            "Your Roll Count is: " << r + 1 << "\n";
                        cout << "\n"
                            "You have rolled a " << outRoll << "\n"
                            << "\n";

                        if (outRoll == 3 || outRoll == 6) {
                            cout << "\n"
                                "Your nevously cross the Star Bridge as boards and rope begin to separate and dissolve; " << "\n"
                                "You quickly move along, reaching the other side as the structure gives way and collaspes." << "\n"
                                "You are now in the East Territory - Congratulations!" << "\n";

                            travelCord = 27;
                            cout << "\n"
                                "You are now on Zone " << travelCord << "\n";
                            //system("PAUSE");
                            break;
                        }

                        if (r == 1) {
                            cout << "\n"
                                "Luck is not on your side, the Star Bridge is a state of disrepair and " << "\n"
                                "too dangerous to cross; you continue your journey along the mountains." << "\n";
                            //Player1.charStrength = Player1.charStrength - 1;
                            //cout << Player1.charStrength << endl;
                            //system("PAUSE");
                            break;
                        }
                    }
                }
            }
        }
        
        if (travelRoute[travelCord] == "Special")
        {
            int specWhat;
            int specValue = 0;
            specWhat = pickItem();
            specValue = findValue(specWhat);

            int z;
            findValue(specWhat);

            //for testing
            //specWhat = 6;

            if (specialItems[specWhat] == "FortuneTeller" && travelCord < 37) {
                cout << "\n"
                    "You have encountered the " << specialItems[specWhat] << ".  The wiley old man shares a travel route that will" << "\n"
                    "leave you in good standing.  He also gifts you a mirror and claims its worth will appear" << "\n"
                    "when you need it the most." << "\n"
                    << "\n";
                    
                int advance = 0;
                for (int a = travelCord; a > 0; a++) {
                    if (travelRoute[a] == "CheckPoint1") {
                        advance = a;
                        break;
                    }
                }
                travelCord = advance;
                cout << "You advance to the next Check Point. You are now on Zone " << travelCord << "\n";
             }

            else if (specialItems[specWhat] == "FortuneTeller" && travelCord > 36) {
                cout << "\n"
                    "You have encountered the " << specialItems[specWhat] << ".  The wiley old man tells you that the" << "\n"
                    "Count's Castle lays ahead.  He also gifts you a mirror and claims its worth will appear" << "\n"
                    "when you need it the most." << "\n"
                    << "\n"
                    "You must prepare your mind and move quickly toward the Castle gates..." << "\n";

                travelCord = 42; //location of the orb!
                system("PAUSE");
            }

            else {
                cout << "\n"
                    "You have found a Special Item!  It is [a] " << specialItems[specWhat] << ".  It's value is " << specValue << "\n"
                    "You may use this item in your journey for assistance" << "\n";
            }
               
            //cout << "\n"
            //    "PLEASE ROLL THE DICE AGAIN" << "\n";

            for (int i = 0; i < 10; i++) {
                if (Player1.specItem[i] == "") {
                    Player1.specItem[i] = specialItems[specWhat];
                   break; // Need this break to stop from fill full array
                }
            }

            //system("PAUSE");
        }

        if (travelRoute[travelCord] == "enemy")
        {
            //int specWhat;
            int specVal = 0;
            int specValue = 0;
            //specWhat = pickItem();
            //specValue = findValue(specWhat);
            
            
            int vilWho;
            vilWho = pickVil();
            string vilType[5] = { "Witch","Wolf","Wizard","Loki","Dragon" };
            //string s = name + std::to_string(age);
            string vilName = vilType[vilWho];

            Player1.battleForce = 0;
            int opStrength = 0;
            switch (vilWho) {
            case 0 :
                opStrength = 10;
                break;
            case 1 :
                opStrength = 6;
                break;
            case 2 :
                opStrength = 10;
            case 3 :
                opStrength = 4;
                break;
            case 4 :
                opStrength = 8;
                break;
            default :
                opStrength = 22; 
            }

            cout << "\n"
                "YOU HAVE ENTERED A BATTLE WITH [a] " << vilName << "\n"
                "Your current Character Strength is " << Player1.charStrength << " while your Opponent Force is " << opStrength << "\n";

            //for testing inventory
            //cout << Player1.invenEmpty() << endl;
            bool invenCheck = Player1.invenEmpty();
            //cout << invenCheck << endl;

            if (invenCheck == false)
            
            {        
                cout << "\n"
                    "You have the following items in Inventory:" << "\n";

                for (int i = 0; i < 10; i++)
                {
                    if (Player1.specItem[i] != "")
                    {
                        string specName = Player1.specItem[i];
                        cout << specName;
                        int j = 0;
                        while (j < 10)
                        {
                            if (specialItems[j] == specName)
                            {
                                break;
                            }
                            j++;
                            //break;
                        }

                        specVal = findValue(j);

                        cout << ", it's value is " << specVal << "." << "\n";
                        //cout << "test index j:" << j << "\n";

                    }
                    //break;

                }

                char userResp;
                do
                {
                    cout << "\n"
                        "Do you wish to use a Special Item? [y/n]";
                    cin >> userResp;
                } while (!cin.fail() && userResp != 'y' && userResp != 'n');

                if (userResp == 'y')
                {
                    string userItem;
                    int u = 0;
                    cout << "\n"
                        "Please enter the name of the item:";
                    cin >> userItem;
                    while (u < 10)
                    {
                        if (specialItems[u] == userItem)
                        {
                            break;
                        }
                        u++;
                        //break;
                    }

                    if (userItem == "FortuneTeller") {
                        cout << "\n"
                            "You have decided to use the mirror imparted by the FortuneTeller. As you gaze into the mirror," << "\n"
                            "an image begins to appear indicating your enemy's weak point." << "\n"
                            "YOU NOW KNOW WHERE TO STRIKE!" << "\n";//NEW NEW
                    }

                    specValue = findValue(u);
                    //for testing
                    //cout << "\n"
                    //    "test index u:" << u << "\n";

                    for (int z = 0; z < 10; z++) {
                            if (Player1.specItem[z] == userItem) {
                                Player1.specItem[z] = "";
                                break;
                            }
                        }

                    

                }

                else
                {
                    cout << "\n"
                        "You've decided to go bare brute force.  Good luck!" << "\n";
                }

             }

            else {
                cout << "\n"
                    "You have no special items in your inventory..." << "\n";
            }
                
            cout << "\n"
                "PLEASE ROLL THE DICE TO DETERMINE YOUR FATE!" << "\n";


            system("PAUSE");

            int rollTell;
            rollTell = rollDie();
            Player1.battleForce = Player1.charStrength + rollTell +specValue;
            if (Player1.battleForce >= opStrength) {
                cout << "\n"
                    "You have rolled a " << rollTell << "."<<"\n"
                    //" and the item value was " << specValue << "\n" //for testing
                    "\n"
                    "Your Battle Force is " << Player1.battleForce << " while your Opponent Force is " << opStrength << ". You WIN and gain 1 point in Character Strength!" << "\n";
                Player1.charStrength = Player1.charStrength + 1;
                    cout << "\n"
                        "Your Character Strength is now " << Player1.charStrength << ". You may continue your PerJour."<<"\n";
                //cout << "PLEASE ROLL THE DICE AGAIN" << "\n";
                //system("PAUSE");
            }
            else {


                int backTrack = 0;
                //cout << "\n"
                //    "travelCord is :" << travelCord << "\n"; //test
                for (int i = travelCord; i > 0; i--) {
                    if (travelRoute[i] == "CheckPoint1") {
                        backTrack = i;
                        //cout << "\n"
                        //    "backTrack is :" << backTrack << "\n"; //test
                        break;
                    }
                    
                }

                travelCord = backTrack;

                cout << "\n"
                    "You have rolled a " << rollTell << "," << "\n"
                    "Your Battle Force is " << Player1.battleForce << " while your Opponent Force is " << opStrength << ". You LOOSE!!!" << "\n"
                    "\n"
                    "You will be sent back to the last Check Point. You are now on Zone " << backTrack << "\n";
                //cout << "PLEASE ROLL THE DICE AGAIN" << "\n";
                //system("PAUSE");
                 

            }

            /*cout << "\n"
            "PLEASE ROLL THE DICE AGAIN" << "\n";
            system("PAUSE");*/
        }

        if (travelRoute[travelCord] == "orb")
        {
            //int specWhat;
            //Player1.charStrength = Player1.charStrength + 10; //test
            int specVal = 0;
            int specValue = 0;
            //specWhat = pickItem();
            //specValue = findValue(specWhat);

            //Player1.charStrength = 1; //test


            string masterVil = "Count Zerb";
            int masterForce = 22;
            int bonusForce = 0;
            cout << "\n"
                <<Player1.jourName <<", YOU HAVE MADE IT TO THE CASTLE WHERE " << masterVil << " RESIDES AND KEEPS THE ORB CAPTIVE."<<"\n"
                "THIS IS THE FINAL BATTLE OF YOUR PERILIOUS JOURNEY.  DEFEAT THE COUNT OR YOUR VILLAGE WILL PERISH!" << "\n"
                << "\n"
                "The Count's Opponent Force is " << masterForce << "\n";

            if (Player1.charSelect == "Trainee") {
                bonusForce = 3;
            } 

            if (Player1.charSelect == "Knight") {
                bonusForce = 6;
            }

            if (Player1.charSelect == "Wizard") {
                bonusForce = 9;
            }
            
            cout << "\n"
                "You have travelled far and your skill as " << Player1.charSelect << " has excelled." << "\n"
                "You have earned a Bonus Force of " << bonusForce << " with a Character Strength of " << Player1.charStrength << "\n";

            //for inventory testing
            //cout << Player1.invenEmpty() << endl;
            bool invenCheck = Player1.invenEmpty();
            //cout << invenCheck << endl;

            if (invenCheck == false)

            {
                cout << "\n"
                    "You have the following items in Inventory:" << "\n";

                for (int i = 0; i < 10; i++)
                {
                    if (Player1.specItem[i] != "")
                    {
                        string specName = Player1.specItem[i];
                        cout << specName;
                        int j = 0;
                        while (j < 10)
                        {
                            if (specialItems[j] == specName)
                            {
                                break;
                            }
                            j++;
                            //break;
                        }

                        specVal = findValue(j);

                        cout << ", it's value is " << specVal << "." << "\n";
                            //"test index j:" << j << "\n";

                    }
                    //break;

                }

                char userResp;
                do
                {
                    cout << "\n"
                        "Do you wish to use a Special Item? [y/n]";
                    cin >> userResp;
                } while (!cin.fail() && userResp != 'y' && userResp != 'n');

                if (userResp == 'y')
                {
                    string userItem;
                    int u = 0;
                    cout << "\n"
                        "Please enter the name of the item:" << "\n";
                    cin >> userItem;

                    while (u < 10)
                    {
                        if (specialItems[u] == userItem)
                        {
                            break;
                        }
                        u++;
                        //break;
                    }

                    if (userItem == "FortuneTeller") {
                        cout << "\n"
                            "You have decided to use the mirror imparted by the FortuneTeller. As you gaze into the mirror," << "\n"
                            "an image begins to appear indicating the Count's Achilles' heel." << "\n"
                            "YOU NOW KNOW WHERE TO STRIKE!" << "\n";//NEW NEW
                    }

                    specValue = findValue(u);

                    //for testing
                    //cout << "\n"
                    //    "test index u:" << u << "\n";

                    for (int z = 0; z < 10; z++) {
                        if (Player1.specItem[z] == userItem) {
                            Player1.specItem[z] = "";
                            break;
                        }
                    }

                }

                else
                {
                    cout << "\n"
                        "You've decided to go bare brute force.  Good luck!";
                }

            }

            else {
                cout << "\n"
                    "you have no special items in your inventory..." << "\n";
            }

            cout << "\n"
                "PLEASE ROLL THE DICE TO DETERMINE YOUR FATE!" << "\n";


            system("PAUSE");

            int rollTell;
            rollTell = rollDie();
            Player1.battleForce = Player1.charStrength + bonusForce + rollTell + specValue;
            if (Player1.battleForce >= masterForce) {
                cout << "\n"
                    "You have rolled a " << rollTell << " and the value was " << specValue << "\n"
                    << "\n"
                    "Your Battle Force is " << Player1.battleForce << " while the Count's Master Force is " << masterForce << "\n"
                    << "\n"
                    "YOU HAVE SLAYED THE COUNT AND RECOVERED THE ORB!" << "\n"
                    "Balance has returned to Aswell; your village will thrive again!" << "\n"
                    << "\n";

                string choice;
                while (choice != "y" || choice != "n") {
                    cout << "Would you like to replay the game, and try your hand at another fate? [y/n]" << "\n";
                    cin >> choice;
                    cout << "\n";
                    if (choice == "y") {
                        goto rerun;

                    }
                    if (choice == "n") {
                        cout << "Goodbye!!!" << "\n";
                        return(0);
                    }
                }

                //return(0);
                //cout << "PLEASE ROLL THE DICE AGAIN" << "\n";
                //system("PAUSE");
            }
            else {


                int backTrack = 0;
                for (int i = travelCord / rollTell; i > 0; i--) {
                    if (travelRoute[i] == "CheckPoint1") {
                        backTrack = i;
                        break;
                    }
                }

                travelCord = backTrack;

                cout << "\n"
                    "You have rolled a " << rollTell << "." << "\n"
                    << "\n"
                    "Your Battle Force is " << Player1.battleForce << " while the Count's Master Force is " << masterForce << ". You LOOSE!!!" << "\n";
                    Player1.charStrength = Player1.charStrength - 3;
                    if (Player1.charStrength < 1) {
                        cout << "\n"
                            << Player1.jourName << ", your Character Strength has been depleted. Your Perilous Journey has ended and your village will perish." << "\n";
                            //return(0);

                        string choice;
                        while (choice != "y" || choice != "n") {
                            cout << "Would you like to replay the game, and try your hand at another fate? [y/n]" << "\n";
                            cin >> choice;
                            cout << "\n";
                            if (choice == "y") {
                                goto rerun;

                            }
                            if (choice == "n") {
                                cout << "Goodbye!!!" << "\n";
                                return(0);
                            }
                        }

                    }
                cout << "You barely survive the battle and loose 3 points in Character Strength.  You will be banished to a random Check Point." << "\n"
                    << "\n"
                    "You are now on Zone " << backTrack << "\n"
                    "Your Character Strength is now: " << Player1.charStrength << "\n";

                //cout << "PLEASE ROLL THE DICE AGAIN" << "\n";
                //system("PAUSE");


            }

            /*cout << "\n"
                "PLEASE ROLL THE DICE AGAIN" << "\n";
            system("PAUSE");*/
        }

        //for testing the end game
        //Player1.charStrength = Player1.charStrength - 22;

        //Player1.charStrength = 0; //test

        if (Player1.charStrength < 1) {
            cout << "\n"
                << Player1.jourName << ", your Character Strength has been depleted. Your Perilous Journey has ended and your village will perish." << "\n";
            //return(0);

            string choice;
            while (choice != "y" || choice != "n") {
                cout << "Would you like to replay the game, and try your hand at another fate? [y/n]" << "\n";
                cin >> choice;
                cout << "\n";
                if (choice == "y") {
                    goto rerun;

                }
                if (choice == "n") {
                    cout << "Goodbye!!!" << "\n";
                    return(0);
                }
            }

        }
     
        cout << "\n"
            "PLEASE ROLL THE DICE AGAIN" << "\n";
        system("PAUSE");

        cout << "\n"
            << "\n"
            "******************** DEATH IS BUT A DOORWAY, TIME IS BUT A WINDOW ********************" << "\n"
            << "\n"
            << "\n";
      
    }



    //system("PAUSE");

    // cout << "Hello world " << Vil1.charSelect << "\n";
    //cout << endl;

    //cout << Player1.specItem[0] << endl;
    //cout << Player1.specItem[1] << endl;
    //cout << Player1.specItem[2] << endl;


    
    cout << "This is a test for the end." << "\n"
        "You have the following items in Inventory:" << "\n";
    for (int i = 0; i < 10; i++) {
        if (Player1.specItem[i] != "") {
            cout << Player1.specItem[i] << "\n";
            //break;
        }
    }
    
   
    //cout << "YOU HAVE FOUND THE ORB, CONGRATULATION!!!" << "\n";




}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
