import { useEffect, useState } from 'react'
import './App.css'
import Card from './Components/Card.jsx'
import ThemeBtn from './Components/ThemeBtn.jsx'
import { ThemeProvider } from './Context/Theme.js'

function App() {
  const [themeMode,setThemeMode]=useState("light");
  const lightTheme=()=>{
    setThemeMode("light")
  }
  const darkTheme=()=>{
    setThemeMode("dark")
  }
  useEffect(()=>{
    const button=document.querySelector('html')
    button.classList.remove("light","dark");
    button.classList.add(themeMode)
  },[themeMode])
  return (

    <ThemeProvider value={{themeMode,lightTheme,darkTheme}}>

      <div className="flex flex-wrap min-h-screen items-center">
        <div className="w-full">
          <div className="w-full max-w-sm mx-auto flex justify-end mb-4">
            <ThemeBtn />
          </div>

          <div className="w-full max-w-sm mx-auto">
            <Card />
          </div>
        </div>
      </div>

    </ThemeProvider>

  )
}

export default App
