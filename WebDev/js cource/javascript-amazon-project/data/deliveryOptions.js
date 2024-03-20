export function getDeliveryOption(deliveryOptionId){
    let delivery;
    deliveryOptions.forEach((item) => {
        if (Number(item.id) === Number(deliveryOptionId)) {
            delivery=item;
        }
    })
    return delivery;
}

export let deliveryOptions = [{
    id: 1,
    deliverydate: 7,
    deliveryPrice: 0
},
{
    id: 2,
    deliverydate: 3,
    deliveryPrice: 499
},
{
    id: 3,
    deliverydate: 0,
    deliveryPrice: 999
},
]