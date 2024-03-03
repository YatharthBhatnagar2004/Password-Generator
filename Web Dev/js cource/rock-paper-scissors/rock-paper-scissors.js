let score = JSON.parse(localStorage.getItem('score')) || {
    win: 0,
    loss: 0,
    draw: 0
};
const resetScoreButton = document.querySelector('.reset-score')
resetScoreButton.addEventListener('click', () => {
    resetScore();
})
function resetScore() {
    score.win = 0;
    score.loss = 0;
    score.draw = 0;
    updateScore();
    localStorage.removeItem('score')
}
function updateScore() {
    document.querySelector('.js-score').innerHTML = `Wins: ${score.win},  Losses: ${score.loss},  Ties: ${score.draw}`;
}
document.querySelector('.js-score').innerHTML = `Wins: ${score.win},  Losses: ${score.loss},  Ties: ${score.draw}`;
const rockButton = document.querySelector('.js-rock-button')
rockButton.addEventListener('click', () => {
    playGame('Rock');
})
const paperButton = document.querySelector('.js-paper-button')
paperButton.addEventListener('click', () => {
    playGame('Paper');
})
const scissorButton = document.querySelector('.js-scissor-button')
scissorButton.addEventListener('click', () => {
    playGame('Scissors');
})
function playGame(playerMove) {
    let result = '';
    let computerMove = pickComputerMove();
    if (playerMove === 'Scissors') {
        if (computerMove === 'Scissors') {
            result = 'Tie';
        } else if (computerMove === 'Rock') {
            result = 'You Lose';
        } else {
            result = 'You Win';
        }
    }
    else if (playerMove === 'Paper') {
        if (computerMove === 'Paper') {
            result = 'Tie';
        } else if (computerMove === 'Scissors') {
            result = 'You Lose';
        } else {
            result = 'You Win';
        }
    } else {
        if (computerMove === 'Rock') {
            result = 'Tie';
        } else if (computerMove === 'Paper') {
            result = 'You Lose';
        } else {
            result = 'You Win';
        }
    }
    if (result === 'You Win') {
        score.win += 1;
    } else if (result === 'Tie') {
        score.draw += 1;
    } else {
        score.loss += 1;
    }
    localStorage.setItem('score', JSON.stringify(score));
    document.querySelector('.js-result').innerHTML = ` ${result}.`;
    document.querySelector('.js-game').innerHTML = `You      <img src="images/${playerMove}-emoji.png" class="img" alt="">   <img src="images/${computerMove}-emoji.png" class="img" alt=""> Computer `;
    document.querySelector('.js-score').innerHTML = `Wins: ${score.win},  Losses: ${score.loss},  Ties: ${score.draw}`;
}
function pickComputerMove(yourPick) {
    let computerMove = '';
    const randomNumber = Math.random();
    if (randomNumber >= 0 && randomNumber < 1 / 3) {
        computerMove = 'Rock';
    }
    else if (randomNumber >= 1 / 3 && randomNumber < 2 / 3) {
        computerMove = 'Paper';
    } else {
        computerMove = 'Scissors';
    }
    return computerMove;
}
let intervalId;
const autoPlayButton = document.querySelector('.js-auto-play')
const stopButton = document.querySelector('.js-stop')
stopButton.addEventListener('click', () => {
    stop();
})
autoPlayButton.addEventListener('click', () => {
    intervalId = setInterval(playerMove, 1000);
})
function playerMove() {
    playGame(pickComputerMove());
}
function stop() {
    clearInterval(intervalId);
}
document.body.addEventListener('keydown',(event)=>{
    console.log(event);
    if(event.key==='r'){
        playGame('Rock');
    }
    else if(event.key==='p'){
        playGame('Paper');
    }
    else if(event.key==='s'){
        playGame('Scissors');
    }
});