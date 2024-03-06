export const cart = [];
const addedMessageTimeouts = {};
export function addtoCart(productId, flag) {
    const quantitySelector = document.querySelector(`.js-quantity-selector-${productId}`).value;
    cart.forEach((item) => {
        if (productId === item.Id) {
            let quantity = Number(item.quantity);
            quantity += Number(quantitySelector);
            item.quantity = quantity;
            flag = true;
        }
    })
    if (!flag) {
        cart.push({
            Id: productId,
            quantity: Number(quantitySelector)
        });
    }
}
export function updateCartQuantity() {
    let cartQuantity = 0;
    cart.forEach((item) => {
        cartQuantity += item.quantity;
    })
    return cartQuantity;
}
export function addedtoCart(cartQuantity, productId) {
    document.querySelector('.js-cart-quantity').innerHTML = cartQuantity;
    document.querySelector(`.js-added-to-cart-${productId}`).classList.add('added-to-cart-visible');
    setTimeout(() => {
        const previousTimeoutId = addedMessageTimeouts[productId];
        if (previousTimeoutId) {
            clearTimeout(previousTimeoutId);
        }
        const timeoutId = setTimeout(() => {
            document.querySelector(`.js-added-to-cart-${productId}`).classList.remove('added-to-cart-visible');
        }, 2000)
        addedMessageTimeouts[productId] = timeoutId;
    });
}