Question #1

Let’s create a random monster generator. This one should be fun.

a) First, let’s create an scoped enumeration of monster types named MonsterType. Include the following monster types: Dragon, Goblin, Ogre, Orc, Skeleton, Troll, Vampire, and Zombie. Add an additional max_monster_types enum so we can count how many enumerators there are.

Show Solution

b) Now, let’s create our Monster class. Our Monster will have 4 attributes (member variables): a type (MonsterType), a name (std::string), a roar (std::string) and the number of hit points (int).

Show Solution

c) enum class MonsterType is specific to Monster, so make MonsterType a nested unscoped enum inside Monster and rename it to Type.

Show Solution

d) Create a constructor that allows you to initialize all of the member variables.

The following program should compile:

int main()
{
	Monster skeleton{ Monster::skeleton, "Bones", "*rattle*", 4 };

	return 0;
}
Show Solution

e) Now we want to be able to print our monster so we can validate it’s correct. Write two functions: One called getTypeString() that returns the monster’s type as a string, and one called print() that matches the output in the sample program below.

The following program should compile:

int main()
{
	Monster skeleton{ Monster::skeleton, "Bones", "*rattle*", 4 };
	skeleton.print();

	Monster vampire{ Monster::vampire, "Nibblez", "*hiss*", 0 };
	vampire.print();

	return 0;
}
and print:

Bones the skeleton has 4 hit points and says *rattle*.
Nibblez the vampire is dead.
Show Solution

f) Now we can create a random monster generator. Let’s consider how our MonsterGenerator will work. Ideally, we’ll ask it to give us a Monster, and it will create a random one for us. Because MonsterGenerator doesn’t have any state, this is a good candidate for a namespace.

Create a MonsterGenerator namespace. Create function within named generate(). This should return a Monster. For now, make it return Monster{ Monster::skeleton, "Bones", "*rattle*", 4};

The following program should compile:

int main()
{
	Monster m{ MonsterGenerator::generate() };
	m.print();

	return 0;
}
and print:

Bones the skeleton has 4 hit points and says *rattle*
Show Solution

g) Add two more functions to the MonsterGenerator namespace. getName(int) will take a number between 0 and 5 (inclusive) and return a name of your choice. getRoar(int) will also take a number between 0 and 5 (inclusive) and return a roar of your choice. Also update your generate() function to call getName(0) and getRoar(0).

The following program should compile:

int main()
{
	Monster m{ MonsterGenerator::generate() };
	m.print();

	return 0;
}
and print:

Blarg the skeleton has 4 hit points and says *ROAR*
Your name and sound will vary based on what you chose.

Show Solution

h) Now we’ll randomize our generated monster. Grab the “Random.h” code from 8.15 -- Global random numbers (Random.h) and save it as Random.h. Then use Random::get() to generate a random monster type, random name, random roar, and random hit points (between 1 and 100).

The following program should compile:

#include "Random.h"

int main()
{
	Monster m{ MonsterGenerator::generate() };
	m.print();

	return 0;
}
and print something like this:

Mort the zombie has 61 hit points and says *growl*