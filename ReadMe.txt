Hunt the Metroid based off of Hunt the Wumpus but metroid themed. The metroid is the Wumpus, the space pirate is the bat, you shoot a missile instead of an arrow, etc. 
You can only shoot through one room at a time. You only move one room at a time as well. There are clues that tell you something is close to you (whether it be a pit or space pirate or the metroid itself). You win if you kill the metroid, die from the metroid, space pirate, or pit, or run out of missiles.

Gamestate loop (follows appstate program gamestate loop):
INIT (splash)
MAIN (main menu)
PLAY (resets data for a new game)
GAME (gameplay)
EXIT (exits the game)

Known bugs:
Pretty much everything doesn't work. Sometimes moving rooms transports you to the wrong room or gives you the wrong rooms to move too (like room 4 being an optino to move to in room 4), shooting moves you into rooms, killing the metroid doesn't work, being killed doesn't work and missiles do not run out and cause you to lose.