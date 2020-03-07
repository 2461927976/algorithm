let str = "aaafdaewrebdafdasfdsafdsafb"

function getStrSum(str) {
    let obj = {}
    for (let i = 0; i < str.length; i++) {
        if (obj[str.charAt(i)]) {
            obj[str.charAt(i)]++
        } else {
            obj[str.charAt(i)] = 1
        }
    }
    let sum = 0
    let number
    for (let key in obj) {
        if (obj[key] > sum) {
            sum = obj[key]
            number = key
        }
    }
    console.log(`${number}出现了${sum}次`)
}
getStrSum(str)