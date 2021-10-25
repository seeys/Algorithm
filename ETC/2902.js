//개발 로직 함수
function solution(input) {
    for(let x of input) {
        if (x === x.toUpperCase() && x !== '-') {
            process.stdout.write(x);
        }
    }

 }
 
const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});

let input;

rl.on("line", function (line) {
    input = line;
    rl.close();

}).on("close", function () {
    solution(input);
    process.exit();
});
