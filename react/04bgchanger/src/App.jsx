import { useState } from "react"


function App() {
  const [color, setColor] = useState("white")

  return (
    <div className="w-full h-screen duration-200"
      style={{ backgroundColor: color }}
    >
      <div className=" flex flex-wrap bottom-12 absolute inset-x-0 justify-center px-2">
        <div className=" bg-white rounded-3xl justify-center w-auto flex flex-wrap gap-3 px-3 py-2 outline-black outline-2 outline"
        style={{backgroundColor:color}}>
          <button className=" bg-red-700 rounded-2xl w-16  outline-black outline-2 outline-dotted " onClick={()=>setColor("red")}>RED</button>
          <button className=" bg-blue-700 rounded-2xl w-16  outline-black outline-2 outline-dotted" onClick={()=>setColor("blue")}>BLUE</button>
          <button className=" bg-green-700 rounded-2xl w-16  outline-black outline-2 outline-dotted" onClick={()=>setColor("green")}>GREEN</button>
          <button className=" bg-pink-500 rounded-2xl w-16  outline-black outline-2 outline-dotted" onClick={()=>setColor("pink")}>PINK</button>
          <button className=" bg-violet-700 rounded-2xl w-16  outline-black outline-2 outline-dotted" onClick={()=>setColor("violet")}>VIOLET</button>
        </div>
      </div>
    </div>
  )
}

export default App