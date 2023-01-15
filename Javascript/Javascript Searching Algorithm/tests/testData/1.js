// Set-1
const set1 = {
  str: "The quick brown fox jumps over the lazy dog.",
  word: "the",
  expectation: [31],
};

// Set-2
const set2 = {
  str: "the quick brown fox jumps over the lazy dog.",
  word: "the",
  expectation: [0, 31],
};

// Set-3
const set3 = {
  str: "The quick brown fox jumps over the lazy dog.",
  word: "cat",
  expectation: [],
};

// Export the data sets
module.exports = { set1, set2, set3 };
