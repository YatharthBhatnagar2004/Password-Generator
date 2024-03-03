let calculation = '';
let s = '';
let s1 = '';
function para() {
    document.querySelector('.js-para').innerHTML = s;
}
function para1() {
    calculation = eval(calculation);
    s=calculation;
    document.querySelector('.js-para').innerHTML = calculation;
}
function para2() {
    document.querySelector('.js-para').innerHTML = '<br>';
}
