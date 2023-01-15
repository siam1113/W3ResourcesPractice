const set1 = {
  array: [1, 2, 3, 4, 5, 6, 7, 8, 9],
  value: 3,
  expectation: 2,
};

const set2 = {
  array: [1, 2, 3, 4, 5, 6, 7, 8, 9],
  value: 9,
  expectation: 8,
};

const set3 = {
  array: [1, 2, 3, 4, 5, 6, 7, 8, 9],
  value: 1,
  expectation: 0,
};

const set4 = {
  array: [1, 2, 3, 4, 5, 6, 7, 8, 9],
  value: 0,
  expectation: -1,
};

module.exports = { set1, set2, set3, set4 };
