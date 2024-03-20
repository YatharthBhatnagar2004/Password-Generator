export let cart = JSON.parse(localStorage.getItem('cart'));
if (!cart) {
    cart = [{
        Id: "e43638ce-6aa0-4b85-b27f-e1d07eb678c6",
        quantity: 1,
        deliveryId: 1
    }, {
        Id: "15b6fc6f-327a-4ec4-896f-486349e85a3d",
        quantity: 1,
        deliveryId: 1
    }];
}
export function saveToLocalStorage() {
    localStorage.setItem('cart', JSON.stringify(cart));
}
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
            quantity: Number(quantitySelector),
            deliveryId: 1
        });
    }
    saveToLocalStorage();
}
export function calculateCartQuantity() {
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
export function removeFromCart(productId) {
    const newCart = [];
    cart.forEach((item) => {
        if (item.Id !== productId) {
            newCart.push(item);
        }
    })
    cart = newCart;
    saveToLocalStorage();
}
export function updateCartQuantity(productId, quantity) {
    cart.forEach((item) => {
        if (item.Id === productId) {
            item.quantity = quantity;
        }
    });
    saveToLocalStorage();
}
export function updateCartDeliveryOptions(productId, deliveryOptionId) {
    let matchingItem;
    cart.forEach((item) => {
        if (item.Id === productId) {
            matchingItem = item;
        }
    });
    matchingItem.deliveryId = deliveryOptionId;
    saveToLocalStorage();
}