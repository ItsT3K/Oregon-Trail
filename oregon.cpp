#include <iostream>
/* Attempt at a simple Oregon Trail Clone */
/* Programmed by Josh D. < ItsT3K > */
    using namespace std;

    int main()
        {
            string s;
                system("clear");
                cout << "\n\t========================================";
                cout << "\n\t|           The Oregon Trail           |";
                cout << "\n\t|======================================|";
                cout << "\n\t|        ASCII Terminal Version        |";
                cout << "\n\t|            Programmed By             |";
                cout << "\n\t|          Joshua D. (ItsT3K)          |";
                cout << "\n\t|                 and                  |";
                cout << "\n\t|                                      |";          
                cout << "\n\t\tDo you need instructions?";
                cout << "\n\t\t\tY or N?";
                //y or n prompt
                char c;
                    do{
                        scanf(" %c",&c); c = toupper(c);
                    }while(c != 'N' & c != 'Y');
                    if (c=='Y'){
                /* Instructions */
                system("clear");
                cout << "\n\t=========================================";
                cout << "\n\t|\tWelcome to the Oregon Trail\t|";
                cout << "\n\t=========================================";
                cout << "\n\t|This program simulates a trip over the |";
                cout << "\n\t|Oregon Trail from Independence, MI to  |";
                cout << "\n\t|Oregon City, Oregon in 1847.           |";
                cout << "\n\t|                                       |";
                cout << "\n\t|Your family of five will cover the 2040|";
                cout << "\n\t|mile Oregon Trail in 5-6 months...     |";
                cout << "\n\t|If you make it alive...                |";
                cout << "\n\t=========================================";
                cout << "\n";
                cout << "\n\t\tPress [ENTER] to Continue\n";
                cin.get();
                cin.ignore(10000,'\n');
                cin.clear();
                /* Instructions Part 2 */
                system("clear");
                cout << "\n\t=========================================";
                cout << "\n\t|You have saved $900 for the trip and   |";
                cout << "\n\t|you have paid $200 for a wagon.        |";
                cout << "\n\t|You will need to spend the rest of your|";
                cout << "\n\t|money on the following items.          |";
                cout << "\n\t|       Oxen - You can spend $200-$300  |";
                cout << "\n\t| on your team. The more you spend the  |";
                cout << "\n\t| faster you'll go because you will have|";
                cout << "\n\t| better animals.                       |";
                cout << "\n\t|                                       |";
                cout << "\n\t|       Food - The more you have the    |";
                cout << "\n\t| less chance there is of getting sick. |";
                cout << "\n\t|                                       |";
                cout << "\n\t|       Ammunition - $1 buys a belt of  |";
                cout << "\n\t| 50 bullets. You will need bullets for |";
                cout << "\n\t| attacks by animals and bandits. As    |";
                cout << "\n\t| well as for hunting food.             |";
                cout << "\n\t|                                       |";
                cout << "\n\t|       Clothes - This is especially    |";
                cout << "\n\t| important for the cold weather you    |";
                cout << "\n\t| will encounter when crossing the      |";
                cout << "\n\t| mountains.                            |";
                cout << "\n\t=========================================";
                cout << "\n\t\tPress [ENTER] To Continue";             
                cin.get();
                cin.ignore(10000,'\n');
                cin.clear();
                /* Instructions Part 3 */
                system("clear");                                  
                }
                /* No Instructions */
                
                return 0;
        }