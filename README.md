# MUD-Adventure-Game

Simple text based adventure game. To run this project, use the input from the input.txt file.
To make your own world follow the follow the promt.
When asked to enter the room info follow this format:
  State,North,South,East,West
    Where State is 0, 1 or 2. This is the cleanliness of the room
    North, South, East and, West is the room number an adjacent room. If there is no room in that direction, use -1.
When asked to enter the creature information follow this format:
  CreatureType,Location
    Where CreatureType is 0 1 or 2. There should only be one creature desginated as 0. This is your character.
    Where Location is the room number the creature starts off in.
    
You win the game by using the given commands to increase your respect level of the creatures.
When your respect level reachs a certain threshold, you win. If your respect gets too low, you lose.
