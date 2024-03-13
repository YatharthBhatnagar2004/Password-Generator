import { cart } from "../../data/cart.js";
import { products, getProduct } from "../../data/products.js";
import { deliveryOptions, getDeliveryOption } from "../../data/deliveryOptions.js";
export function formatCurrency(priceCents) {
    return (Math.round(priceCents) / 100).toFixed(2);
}
export function calculateTotalMoney() {
    let totalMoney = Number(0);
    let totalShipping = 0;
    cart.forEach((item) => {
        let delivery = getDeliveryOption(item.deliveryId);
        totalShipping += delivery.deliveryPrice;
        // console.log(delivery);
        let price = 0;
        let matchingItem = getProduct(item.Id);
        price = Number(item.quantity) * Number(matchingItem.priceCents);
        totalMoney += Number(price);
    })
    return { totalMoney, totalShipping };
}