import { cart, removeFromCart, calculateCartQuantity, updateCartQuantity, updateCartDeliveryOptions } from '../data/cart.js'
import { products } from '../data/products.js';
import { formatCurrency } from './utils/money.js';
import { deliveryOptions } from '../data/deliveryOptions.js';
function renderOrderSummary() {
  let cartHtml = ``;
  cart.forEach((item) => {
    let productImage;
    let productQuantity = item.quantity;
    let productName;
    let productPrice = 0;
    let deliveryOptionId = item.deliveryId;
    let date = 0;
    deliveryOptions.forEach((item) => {
      if (Number(item.id) === Number(deliveryOptionId)) {
        date = item.deliverydate;
      }
    })
    products.forEach((product) => {
      if (product.id === item.Id) {
        productImage = product.image;
        productName = product.name;
        productPrice = product.priceCents;
      }
    })
    cartHtml += `
          <div class="cart-item-container js-cart-item-container-${item.Id}">
              <div class="delivery-date js-delivery-date-${item.Id}"> 
                ${`Delivery date: ${dayjs().add(date, 'days').format('dddd, MMMM D')}`}
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
                      Quantity: <span class="quantity-label js-quantity-label-${item.Id}">${productQuantity}</span>
                    </span>
                    <span class="update-quantity-link link-primary js-cart-update" data-product-id="${item.Id}">
                      Update
                    </span>
                    <input class="update-quantity-input js-update-input-${item.Id}" data-product-id="${item.Id}" type="text">
                    <span class="save-quantity-link link-primary js-cart-update-save " data-product-id="${item.Id}">
                      Save
                    </span>

                    <span class="delete-quantity-link link-primary js-cart-delete"
                    data-product-id="${item.Id}">
                      Delete
                    </span>
                  </div>
                </div>

                <div class="delivery-options">
                  ${deliveryOption(item.Id, item)}
                </div>
              </div>
          </div>
      `
  });
  function deliveryOption(productId, Product) {
    let html = ``;
    deliveryOptions.forEach((item) => {
      const today = dayjs();
      const date = today.add(item.deliverydate, 'days');
      const dateString = date.format('dddd, MMMM D');
      const Shipping = item.deliveryPrice === 0 ? "Free " : `$${formatCurrency(item.deliveryPrice)} - `;
      const isChecked = Number(item.id) === Number(Product.deliveryId);
      html +=
        `
        <div class="delivery-option js-deliver-option"
          data-product-id="${productId}"
          data-deliveryOption-id="${item.id}"
        >
          <input type="radio" 
            ${isChecked === true ? 'checked' : ''}
            class="delivery-option-input"
            name="delivery-option-${productId}">
          <div>
            <div class="delivery-option-date">
              ${dateString}
            </div>
            <div class="delivery-option-price">
              ${Shipping}Shipping
            </div>
          </div>
        </div>
      
      `
    })
    return html;
  }

  document.querySelector('.js-order-summary').innerHTML = cartHtml;
  document.querySelectorAll('.js-cart-delete').forEach((button) => {
    const productId = button.dataset.productId;
    button.addEventListener('click', () => {
      removeFromCart(productId);
      const conatiner = document.querySelector(`.js-cart-item-container-${productId}`);
      conatiner.remove();
      cartQuantity = calculateCartQuantity();
      document.querySelector('.js-return-to-home-link').innerHTML =`${cartQuantity} items`
    });
  });
  let cartQuantity = calculateCartQuantity();
  document.querySelector('.js-return-to-home-link').innerHTML = `${cartQuantity} items`
  cartQuantity = calculateCartQuantity();
  document.querySelectorAll('.js-cart-update').forEach((button) => {
    const productId = button.dataset.productId;
    button.addEventListener('click', () => {
      const container = document.querySelector(`.js-cart-item-container-${productId}`);
      container.classList.add("is-editing-quantity");
      container.classList.add("is-editing-quantity-update");
      container.classList.remove('is-editing-quantity-input');
    });
  });
  document.querySelectorAll('.js-cart-update-save').forEach((button) => {
    const productId = button.dataset.productId;
    button.addEventListener('click', () => {
      inputSaveUpdate(productId);
    });
  });
  document.querySelectorAll(".update-quantity-input").forEach((button) => {
    const productId = button.dataset.productId;
    button.addEventListener('keypress', (event) => {
      if (event.key === 'Enter') {
        inputSaveUpdate(productId);
      }
    })
  })
  function inputSaveUpdate(productId) {
    const container = document.querySelector(`.js-cart-item-container-${productId}`);
    container.classList.remove('is-editing-quantity-update');
    container.classList.add('is-editing-quantity-input')
    const input = document.querySelector(`.js-update-input-${productId}`);
    const quantity = Number(input.value);
    if (quantity < 0 || quantity > 1000) {
      alert("Enter valid quantity");
    } else {
      updateCartQuantity(productId, quantity);
      document.querySelector(`.js-quantity-label-${productId}`).innerHTML = quantity;
      cartQuantity = calculateCartQuantity();
      document.querySelector('.js-checkout-header').innerHTML = `Checkout(${cartQuantity})`;
    }
    input.value = '';
  }
  document.querySelectorAll('.js-deliver-option').forEach((button) => {
    button.addEventListener('click', () => {
      const { productId, deliveryoptionId } = button.dataset;
      updateCartDeliveryOptions(productId, deliveryoptionId);
      renderOrderSummary();
    })
  })
}
renderOrderSummary(); 