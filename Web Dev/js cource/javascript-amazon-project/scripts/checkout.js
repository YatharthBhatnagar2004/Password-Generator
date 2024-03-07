import { cart, removeFromCart } from '../data/cart.js'
import { products } from '../data/products.js';
import { formatCurrency } from './utils/money.js';
let cartHtml = ``;
cart.forEach((item) => {
  let productImage;
  let productQuantity = item.quantity;
  let productName;
  let productPrice = 0;
  products.forEach((product) => {
    if (product.id === item.Id) {
      productImage = product.image;
      productName = product.name;
      productPrice = product.priceCents;
    }
  })
  cartHtml += `
        <div class="cart-item-container js-cart-item-container-${item.Id}">
            <div class="delivery-date"> 
              Delivery date: Tuesday, June 21
            </div>
            <div class="cart-item-details-grid">
              <img class="product-image"
                src="${productImage}">

              <div class="cart-item-details">
                <div class="product-name">
                  ${productName}
                </div>
                <div class="product-price">
                  $${formatCurrency(productPrice)}
                </div>
                <div class="product-quantity">
                  <span>
                    Quantity: <span class="quantity-label">${productQuantity}</span>
                  </span>
                  <span class="update-quantity-link link-primary">
                    Update
                  </span>
                  <span class="delete-quantity-link link-primary js-cart-delete"
                   data-product-id="${item.Id}">
                    Delete
                  </span>
                </div>
              </div>

              <div class="delivery-options">
                <div class="delivery-options-title">
                  Choose a delivery option:
                </div>
                <div class="delivery-option">
                  <input type="radio" checked
                    class="delivery-option-input"
                    name="delivery-option-${item.Id}">
                  <div>
                    <div class="delivery-option-date">
                      Tuesday, June 21
                    </div>
                    <div class="delivery-option-price">
                      FREE Shipping
                    </div>
                  </div>
                </div>
                <div class="delivery-option">
                  <input type="radio" 
                    class="delivery-option-input"
                    name="delivery-option-${item.Id}">
                  <div>
                    <div class="delivery-option-date">
                      Wednesday, June 15
                    </div>
                    <div class="delivery-option-price">
                      $4.99 - Shipping
                    </div>
                  </div>
                </div>
                <div class="delivery-option">
                  <input type="radio" 
                    class="delivery-option-input"
                    name="delivery-option-${item.Id}">
                  <div>
                    <div class="delivery-option-date">
                      Monday, June 13
                    </div>
                    <div class="delivery-option-price">
                      $9.99 - Shipping
                    </div>
                  </div>
                </div>
              </div>
            </div>
        </div>
    `
});
// console.log(cartHtml);
document.querySelector('.js-order-summary').innerHTML = cartHtml;
document.querySelectorAll('.js-cart-delete').forEach((button) => {
  const productId = button.dataset.productId;
  button.addEventListener('click', () => {
    removeFromCart(productId);
    const conatiner = document.querySelector(`.js-cart-item-container-${productId}`);
    conatiner.remove();
  })
})