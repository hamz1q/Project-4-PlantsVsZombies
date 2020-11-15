#include "Peashooter.h"

  // Name: Peashooter() - Default Constructor
  // Description: Creates a new peashooter
  // Preconditions: None
  // Postconditions: Can create a peashooter
Peashooter::Peashooter()
{

}

  // Name: Peashooter(string name, int hp)
  // Description: Creates a new peashooter
  // Preconditions: None
  // Postconditions: Can create a peashooter
Peashooter::Peashooter(string name, int health)
{
  SetName(name);
  SetHealth(health);
}

  // Name: ~Peashooter - Virtual Destructor
  // Description: Makes sure everything in child class is deallocated
  // Preconditions: None
  // Postconditions: Everything dynamically allocated is deallocated
Peashooter::~Peashooter()
{

}

  // Name: SpecialAttack
  // Description: Defines the Peashooter's special attack
  // Preconditions: None
  // Postconditions: Returns damage from special attack
int Peashooter::SpecialAttack()
{
  int upper = 12;
  int lower = 3;
  int damage = (rand() % (upper - lower + 1)) + lower;
  
  cout << "Spins up doing GATLING DAMAGE!" << endl;
  return damage;
}
