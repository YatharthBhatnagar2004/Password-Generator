const todoList = [];
renderTodoListForEach();
function renderTodoList() {
    let todoListHtml = '';
    for (let i = 0; i < todoList.length; ++i) {
        const todoobject = todoList[i];
        // const name = todoobject.name;
        // const duedate = todoobject.dueDate;
        const { name, dueDate } = todoobject;
        const html = `<p>${name} ${dueDate} <button 
        onclick="
        todoList.splice(${i},1);
        renderTodoList();
        ">Delete </button></p>`
        todoListHtml += html;
    }
    document.querySelector('.divtodo').innerHTML = todoListHtml;
}
function addTodo() {
    const inputElement = document.querySelector('.todo');
    const inputElement1 = document.querySelector('.tododate');
    todoList.push({ name: inputElement.value, dueDate: inputElement1.value });
    inputElement.value = '';
    inputElement1.value = '';
    renderTodoListForEach();
}
function renderTodoListForEach() {
    let todoListHtml = '';
    todoList.forEach(function (todoobject, index) {
        const { name, dueDate } = todoobject;
        const html = `<p>${name} ${dueDate} <button 
        onclick="
        todoList.splice(${index},1);
        renderTodoList();
        ">Delete </button></p>`
        todoListHtml += html;
    })
    document.querySelector('.divtodo').innerHTML = todoListHtml;
}