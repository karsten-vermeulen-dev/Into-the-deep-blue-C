## Create a small game of <i>TicTacToe</i>:

Implement a basic game of <i>TicTacToe</i> using a console application. The playing field is represented by a two-dimensional array. The players can, in turns, input the position (row & column) for movement. The corresponding symbol is then put into the array. In every round the game checks if a player has won the game.

<b>1.</b> Create a <b>3x3</b> <i>char</i> array <br>
<b>2.</b> Write a function which fills the array with empty symbols. The function signature looks as follows:

```cpp
void GenerateMap();
```

<b>3.</b> Write a function called <i>ShowMap()</i> which displays the playing field within the console application:

```cpp
void ShowMap();
```

<b>4.</b> Create three <i>char</i> variables, namely <i>player1 = 'X'</i>, <i>player2 = 'O'</i> and <i>currentPlayer</i> <br>
<b>5.</b> Create a <i>bool</i> variable <i>isPlayer1Active</i> which is used to distinguish which player's turn it is. <br>
<b>6.</b> Write a function called <i>SetNewPosition()</i> which asks the player for the <i>row</i> and <i>column</i> into which to insert their symbol. Assign those values to the corresponding variables:

```cpp
void SetNewPosition();
```

<b>7.</b> Write the symbol to the correct position within the array. <br>
<b>8.</b> Write a function called <i>CheckWin()</i> which checks if the current player has won the game. <br>
<b>9.</b> Write a function called <i>PlayGame()</i> which internally invokes <i>ShowMap()</i> and <i>SetNewPosition()</i>. <br>
<b>10.</b> Make sure to call <i>GenerateMap()</i> and <i>PlayGame()</i> in <i>main.cpp</i>. <br>

### Bonus <br>
Make sure players can only put symbols on empty spaces. Implement some sort of score for each player, which is shown at the end of a game. Winning a game earns you one point.  

### Hints
<b>1.</b> Use <b>'\n'</b> for new lines. <br>
<b>2.</b> Use nested loops for the array. <br>
<b>3.</b> Make sure to clear the console screen in <i>ShowMap()</i> so that the map is always at the top. <br>
