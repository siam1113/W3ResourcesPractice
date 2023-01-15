/*
Problem 1
----------
 Write a JavaScript program to find all the index positions of a given word within a given string. Go to the editor
Test Data:
( "The quick brown fox jumps over the lazy dog.", "the") -> [31]
( "the quick brown fox jumps over the lazy dog.", "the") -> [0, 31]
( "the quick brown fox jumps over the lazy dog.", "cat") -> []
*/

function findIndexesOfAWord(string, word) {
  notFound = false;
  indexes = [];
  index = -3;
  while (!notFound) {
    index = string.indexOf(word, index + 3);
    if (index == -1) {
      notFound = true;
    } else {
      indexes.push(index);
    }
  }
  return indexes;
}

module.exports = findIndexesOfAWord;
