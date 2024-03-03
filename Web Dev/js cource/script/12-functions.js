const arr = [1, 2, 3, 4, 5, 6, 7];
arr.forEach((value, index) => {
    console.log(value);
    console.log(index);
});
const arrowFunction = () => {
    console.log('Hello');
};
arrowFunction();
const oneParam = param => {
    return param + 1;
}
console.log(oneParam(2));
const oneLine = param => param + 3;
console.log(oneLine(4));