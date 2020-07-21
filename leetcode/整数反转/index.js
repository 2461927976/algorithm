/**
 * 反转整数
 * @param x 整数x
 */
var reverse = function(x) {
    let str = x.toString()
    if (str.slice(0, 1) === "-") {
        let res = str.slice(1).split("").reverse().join("")
        if (parseInt(`-${res}`) >= -2147483648 && parseInt(`-${res}`) <= 2147483647) {
            return `-${res}`
        }
        else {
            return 0
        }
    }
    let res = str.split("").reverse().join("")
    if (res.slice(0, 1) === "0") {
        if (parseInt(res.slice(1)) >= -2147483648 && parseInt(res.slice(1)) <= 2147483647) {
            return res.slice(1)
        }
        else {
            return 0
        }
    }
    if (parseInt(res) >= -2147483648 && parseInt(res) <= 2147483647) {
        return res
    }
    else {
        return 0
    }
}
