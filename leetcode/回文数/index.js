/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function (x) {
  let str = x.toString()
  let transNum = str.split("").reverse().join("")
  if (str === transNum) {
    return true
  }
  return false
};
