const nums = ['abc', 'def', 1, 2, 'abc', 'rt', 'lm', 'abc'];
let flag = true;
let b = 0;
for (let i = 0; i < nums.length; ++i) {
    if (nums[i] === 'abe') {
        b = i;
        flag = false;
    }
}
if (flag) {
    console.log(-1);
} else {
    console.log(b);
}
let k = 0;
const arr = nums.slice().reverse();
for (let i = 0; i < nums.length; ++i) {
    if (k < 2) {
        if (arr[i] === 'abc') {
            arr.splice(i, 1);
            k++;
        }

    }
}
let str = '';
console.log(arr);
console.log(nums);
for (let i = 1; i <= 20; ++i) {
    if (i % 3 === 0 && i % 5 === 0) {
        str += 'FizzBuzz ';
    } else if (i % 5 === 0) {
        str += 'Buzz ';
    } else if (i % 3 === 0) {
        str += 'Fizz ';
    } else {
        str += `${i} `;
    }
}
console.log(str);
const add = function () {
    console.log(2 + 3);
}
add();
add();
const runTwice = function (param) {
    param();
    param();
}
runTwice(add);
function change() {
    const inputElement = document.querySelector('.js-start');
    inputElement.innerHTML = 'Finished!!';
}
let timeout;
function start() {
    timeout = setTimeout(change, 3000);
}
function stop() {
    clearTimeout(timeout);
}

function ready() {
    const inputElement = document.querySelector('.js-ready');
    inputElement.innerHTML = 'Set';
    setTimeout(function () {
        const inputElement = document.querySelector('.js-ready');
        inputElement.innerHTML = 'Go!!';
    }, 2000);
}
let flag1 = true;
function addtoCart() {
    if (flag1) {
        timeout = setTimeout(function () {
            const inputElement = document.querySelector('.js-add-to-cart');
            inputElement.innerHTML = 'Added';
        }, 2000);
        flag1 = false;
    } else {
        clearTimeout(timeout);
        timeout = setTimeout(function () {
            const inputElement = document.querySelector('.js-add-to-cart');
            inputElement.innerHTML = 'Added';
        }, 2000);
        flag1 = true;
    }
}
let messages = 0;
function messagesAdd() {
    messages += 1;
}
function messagesRemove() {
    messages -= 1;
}
setInterval(function () {
    if(messages>0){
        if (document.title === 'App') {
            document.title = `(${messages})New Messages`;
        } else {
            document.title = 'App';
        }
    }else{
        document.title = 'App';
        messages=0;
    }
}, 1000);