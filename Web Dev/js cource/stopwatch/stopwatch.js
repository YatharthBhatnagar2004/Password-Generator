const start = document.querySelector('.Start');
const stop = document.querySelector('.Stop');
const reset = document.querySelector('.Reset');
const h = document.querySelector('.hours');
const m = document.querySelector('.minutes');
const s = document.querySelector('.seconds');
const ms = document.querySelector('.miliseconds');
let hours = 0, minutes = 0, seconds = 0, miliseconds = 0;
let flag = true;
let intervalId;
start.addEventListener('click', () => {
    timer();
})
stop.addEventListener('click', () => {
    clearTimeout(intervalId);
})
reset.addEventListener('click', () => {
    let minutes1 = '00';
    let hours1 = '00';
    let seconds1 = '00';
    let miliseconds1 = '00';
    m.innerHTML = minutes1;
    h.innerHTML = hours1;
    s.innerHTML = seconds1;
    ms.innerHTML = miliseconds1;
    hours = 0; minutes = 0; seconds = 0; miliseconds = 0;
    clearTimeout(intervalId);
})
function timer() {
    miliseconds += 1;
    if (miliseconds === 100) {
        seconds += 1;
        miliseconds = 0;
    }
    if (seconds === 60) {
        minutes += 1;
        seconds = 0;
    }
    if (minutes === 60) {
        hours += 1;
        minutes = 0;
        seconds = 0;
    }
    let minutes1;
    let hours1;
    let seconds1;
    let miliseconds1;
    if (miliseconds < 10) {
        miliseconds1 = '0' + miliseconds;
    } else {
        miliseconds1 = miliseconds;
    }
    if (seconds < 10) {
        seconds1 = '0' + seconds;
    } else {
        seconds1 = seconds;
    }
    if (minutes < 10) {
        minutes1 = '0' + minutes;
    } else {
        minutes1 = + minutes;
    }
    if (hours < 10) {
        hours1 = '0' + hours;
    } else {
        hours1 = hours
    }
    m.innerHTML = minutes1;
    h.innerHTML = hours1;
    s.innerHTML = seconds1;
    ms.innerHTML = miliseconds1;
    intervalId = setTimeout(timer, 10);
}
