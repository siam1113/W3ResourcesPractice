const { set1, set2, set3 } = require("./testData/1");
const findIndexesOfAWord = require("../exercises/1");

test("testing with data set 1", () => {
  expect(findIndexesOfAWord(set1.str, set1.word)).toEqual(set1.expectation);
});

test("testing with data set 2", () => {
  expect(findIndexesOfAWord(set2.str, set2.word)).toEqual(set2.expectation);
});

test("testing with data set 3", () => {
  expect(findIndexesOfAWord(set3.str, set3.word)).toEqual(set3.expectation);
});
