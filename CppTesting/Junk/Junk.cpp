#include "iostream"

int main()
{
    int gold = 0;
    int keys = 0;
    int health_potions = 1;
    int durability = 100;
    int torch_durability = 1;
    int level = 1;

    double health = 100;
    double enemy_health = 10;

    srand(time(NULL));
    int enemy1_damage = rand() % 10 + 1;
    int playerHit = 0;

    int fist_damage = 0;
    int dagger_damage = 3;
    int torch_damage = 1;
    int burn_damage = 2;
    int sword_damage = 8;
    int bow_damage = 4;

    srand(time(NULL));
    int dodge_chance = rand() % 10 + 1;

    bool hasTorch = false;
    bool hasDagger = false;
    bool hasSword = false;
    bool hasBow = false;
    bool playerAttack = false;
    bool isBurning = false;

    std::cout << "You wake up in a dark and cold room\n" << "You start to feel around and you find a torch\n" << "Light torch?\n\n" << "y or n: ";

    char yes = 'y';
    char no = 'n';

    char answer;
    std::cin >> answer;

    while (answer != yes && answer != no)
    {

        std::cout << "Enter a valid answer\n";
        std::cin >> answer;
        std::cout << "\n";

    }

    if (answer == yes)
    {

        std::cout << "\nYou hear giant footsteps and heavy breathing coming your way\n" << "What do you do?\n\n";

    }
    else if (answer == no)
    {

        std::cout << "\nyou are attacked by a creature in the dark and died\n";

        return 0;

    }

    std::string Fist = "Fist";
    std::string Torch = "Torch";
    std::string Dagger = "Dagger";
    std::string Sword = "Sword";
    std::string Bow = "Bow";
    std::string input;

    while (health <= 0 && enemy_health <= 0)
    {

        std::cout << "Player    " "   Health: " << health << " Level: " << level << "\n";
        std::cout << "Inventory    " << "Gold:   " << gold << "   Keys:  " << keys << " Health Potions: " << health_potions << "\n\n";
        std::cout << "Fist: " << fist_damage << " damage " << " Torch: " << torch_damage << " damage \n" << "                Status Effects:\n\n" << "                Burn:  " << burn_damage << " damage\n\n";

        std::cout << "Use: ";
        std::cin >> input;

        if (input == Fist)
        {

            std::cout << "\nYou did " << fist_damage << " damage\n\n";
            std::cout << "Monsters Health: " << enemy_health << "\n";
            playerAttack = true;

        }
        else if (input == Torch)
        {

            std::cout << "\nYou did " << torch_damage << " damage\n" << "You did " << burn_damage << " burn damage\n\n";
            int total = enemy_health - (torch_damage + burn_damage);
            enemy_health = total;
            std::cout << "Monsters Health: " << enemy_health;
            torch_durability--;
            playerAttack = true;
            isBurning = true;

        }

        while (playerAttack != true)
        {

            std::cout << "\n\nPlease enter a valid answer\n\n";
            std::cout << "Use: ";
            std::cin >> input;

            if (input == Fist)
            {

                std::cout << "\nYou did " << fist_damage << " damage\n\n";
                std::cout << "Monsters Health: " << enemy_health << "\n";
                playerAttack = true;

            }
            else if (input == Torch)
            {

                std::cout << "\nYou did " << torch_damage << " damage\n" << "You did " << burn_damage << " burn damage\n\n";
                int total = enemy_health - (torch_damage + burn_damage);
                enemy_health = total;
                std::cout << "Monsters Health: " << enemy_health;
                torch_durability--;
                playerAttack = true;
                isBurning = true;

            }

        }

        if (playerAttack == true)
        {

            std::cout << "\n\nThe enemy attacks\n\n";

        }

        if (dodge_chance == 5)
        {

            std::cout << "\n\nYou dodged the enemies attack\n\n";

        }
        else if (dodge_chance != 5)
        {

            std::cout << "The enemy landing a crushing blow\n\n";
            playerHit = enemy1_damage;
            int health_real = health - playerHit;
            health = health_real;
            std::cout << "The enemy does " << playerHit << " damage\n\n";

        }

        std::cin.get();
    }
}
