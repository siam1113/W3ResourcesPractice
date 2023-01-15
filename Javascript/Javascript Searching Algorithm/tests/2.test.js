const { set1, set2, set3, set4 } = require("./testData/2");
const linearSearch = require("../exercises/2");

test("testing with data set 1", () => {
  expect(linearSearch(set1.array, set1.value)).toBe(set1.expectation);
});

test("testing with data set 2", () => {
  expect(linearSearch(set2.array, set2.value)).toBe(set2.expectation);
});

test("testing with data set 3", () => {
  expect(linearSearch(set3.array, set3.value)).toBe(set3.expectation);
});

test("testing with data set 4", () => {
  expect(linearSearch(set4.array, set4.value)).toBe(set4.expectation);
});
