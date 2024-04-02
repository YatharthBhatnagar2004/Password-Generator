import React, { useContext } from 'react'
import UserContext from '../Context/UserContext.js'

function Profile() {
    const { user } = useContext(UserContext);
    if (!user) return <div>Please buy the sen bundle and login</div>
    return (
        <div>
            <p>
                Welcome User: {user.username}
            </p>
            <p>
                Your password: {user.password}
            </p>

        </div>
    )


}

export default Profile