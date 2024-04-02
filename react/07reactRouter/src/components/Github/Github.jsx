import React, { useEffect, useState } from 'react'

function Github() {
    const [data, setData] = useState([])
    useEffect(() => {
        fetch('https://api.github.com/users/hiteshchoudhary')
            .then((res) => res.json())
            .then((res) => {
                console.log(res);
                setData(res);
            })
    }, [])

    return (
        <div className=' bg-pink-400 '>Github Followers:{data.followers}
            <img src={data.avatar_url} alt="" />
        </div>
    )
}

export default Github