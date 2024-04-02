import React from 'react'
import './App.css'
import UserContextProvider from './Context/UserContextProvider'
import Login from './Components/Login.jsx'
import Profile from './Components/Profile.jsx'

function App() {

  return (
    <UserContextProvider>
      <h1>React Context</h1>
      <Login/>
      <Profile/>
    </UserContextProvider>
  )
}

export default App
