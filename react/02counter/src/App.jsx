import { useState } from 'react';
import './App.css'

function App() {
  let [Counter, setCounter] = useState(0);
  const addValue = () => {
    Counter += 1;
    setCounter(Counter);
  }
  const deleteValue = () => {
    if(Counter===0){
      alert("Negative value not allowed");
    }else{
      setCounter(Counter-1);
    }
  }

  return (
    <>
      <h1>Counter: {Counter}</h1>
      <button
        onClick={addValue}
      >Add</button>
      <br />
      <button
        onClick={deleteValue}
      >Delete</button>
    </>
  )
}

export default App
