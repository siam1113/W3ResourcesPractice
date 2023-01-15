/**
 * Problem 2
 * ----------
 * Write a JavaScript program to find the first index of a given element in an array using the linear search algorithm
 */

function linearSearch(arrayInput, valueInput) {
  /*
   * Handling unexpected argument inputs
   */
  // Less arguments
  if (arguments.length < 1) throw "Kindly put all the necessary arguments";

  // Wrong type of argument
  if (typeof arguments != "object" || typeof arguments[1] != "number")
    throw "Kindly put arguments with correct types";

  /**
   * Solving the problem
   */
  let position;
  const array = arrayInput;
  let arrayLength = array.length;

  // Searching for the value
  for (let i = 0; i < arrayLength; i++) {
    if (array[i] != valueInput && i == arrayLength - 1) {
      position = -1;
    } else if (array[i] == valueInput) {
      position = i;
      break;
    }
  }
  return position;
}
module.exports = linearSearch;
