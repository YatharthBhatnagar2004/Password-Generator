import Card from './components/Card.jsx'
import './App.css'

function App() {
  const obj={
    user:"lund",
    age:1
  }
  return (
    <>
      <h1 className=' bg-green-500'>Tailwind Props</h1>
      <Card username="yatharth" myobj={obj} />
    </>
  )
}

export default App
