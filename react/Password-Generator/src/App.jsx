import { useState, useCallback, useEffect, useRef } from 'react'
import './App.css'

function App() {
  const [length, setLength] = useState(8);
  const [isNumber, setNumber] = useState("false");
  const [isCharacter, setCharacter] = useState("false");
  const [password, setPassword] = useState("");
  const passwordRef = useRef(null);
  const passwordGenerator = useCallback(() => {
    let pass = " ";
    let str = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    if (isCharacter) {
      str += "!@#$%^&*:;?/><,.";
    }
    if (isNumber) {
      str += "1234567890";
    }
    for (let i = 1; i <= length; ++i) {
      let char = Math.floor(Math.random() * str.length + 1);
      pass += str.charAt(char);
    }
    setPassword(pass);
  }, [length, isCharacter, isNumber])
  const copyToClipboard = () => {
    passwordRef.current?.select();
    passwordRef.current?.setSelectionRange(0, 4);
    window.navigator.clipboard.writeText(password);
  }
  useEffect(() => {
    passwordGenerator()
  }, [length, isCharacter, isNumber, passwordGenerator])
  return (
    <>
      <div className=' w-full max-w-xl mt-10  bg-gray-700 rounded-2xl px-4 my-8 shadow-md mx-auto py-3'>
        <h1 className=' mt-2 mb-4 text-4xl text-white text-center'>PASSWORD GENERATOR</h1>
        <div className='flex shadow rounded-xl overflow-hidden mb-6'>
          <input className=' outline-none w-full py-1 px-3 text-pink-400 text-xl' type="text" value={password} placeholder='PASSWORD' readOnly ref={passwordRef} />
          <button className=' outline-none bg-blue-700 w-24 text-white px-3 py-0.5 shrink-0' onClick={copyToClipboard}>Copy</button>
        </div>
        <div className='flex gap-x-2 text-sm'>
          <div className='gap-x-1 items-center flex'>
            <input type="range" min={8} max={64} value={length} className=' cursor-pointer' onChange={(e) => { setLength(e.target.value) }} />
            <p className=' text-white text-xl'>length: {length}</p>
            <input type="checkbox" defaultChecked={isNumber} id='numberInput' onChange={() => { setNumber((prev) => !prev) }} className='ml-4' />
            <p className=' text-white text-lg'>Numbers</p>
            <input type="checkbox" defaultChecked={isCharacter} id='characterInput' onChange={() => { setCharacter((prev) => !prev) }} className='ml-4' />
            <p className=' text-white text-lg'>Characters</p>
          </div>
        </div>
      </div>
    </>
  )
}

export default App
