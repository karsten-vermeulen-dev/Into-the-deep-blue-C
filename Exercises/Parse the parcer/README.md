## String parser

### Concepts you will improve on:

- Use of <i>std::string</i> and its various member functions 

### Create a string parser function

<b>1.</b> Write a function called <i>ParseString()</i> that takes in a <i>std::string</i> object and a <i>char</i> token that signifies where to split the string.

<b>2.</b> The function should loop through the entire string and break it up into pieces where ever it finds the token.

<b>3.</b> The broken string pieces should be stored in a separate <i>std::vector</i> of strings, preferably also passed to the function as an argument.

<b>4.</b> Add a check to make sure the string is not empty.
