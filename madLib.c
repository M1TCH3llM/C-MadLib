// imports standard input and out put library
#include <stdio.h>
#include <cs50.h>

int main(void)
{
// string defines awswer type
// get_string is function to promped type input from user
  string color = get_string("favorite a color? ");
  string name = get_string("Name of a famous person? ");
  string place = get_string("Place you want to vacation? ");
  string action = get_string("Synonym for throw? ");
  string object = get_string("Something you find in the kitchen? ");
  string animal = get_string("Name of an animal? ");
  string food = get_string("Type of food? ");

// %s inserts value from additional argument
      printf("The Story Of %s\n", name);
      printf("A few weeks ago %s went on a trip to %s. They where really excited about this trip so they wore their favorite %s shirt. When they arrived at their hotel they noticed something off. They noticed a giant %s eating %s. %s Screamed, and startled the %s so much that it spit the %s all over %s favorite %s shirt. %s was mad and grabbed the closest %s and %s it at them. The %s ran off, and %s vowed to never return to this Hotel.\n", name, place, color, animal, food, name, animal, food, name, color, name, object, action, animal, name);

}