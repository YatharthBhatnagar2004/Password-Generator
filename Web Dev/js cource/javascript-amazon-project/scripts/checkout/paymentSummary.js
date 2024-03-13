import { calculateCartQuantity, cart } from "../../data/cart.js";
import { calculateTotalMoney } from "../utils/money.js";
import { getProduct } from "../../data/products.js";
import { formatCurrency } from "../utils/money.js";
export function renderPaymentSummary() {
    const totalCartQuantity = calculateCartQuantity();
    const { totalMoney, totalShipping } = calculateTotalMoney();
    console.log(totalMoney);
    console.log(totalShipping);
    const totalBeforeTax = Number(totalMoney + totalShipping);
    console.log(totalBeforeTax);
    const tax = Number(totalBeforeTax) * 0.1;
    console.log(tax)
    const total = (Number(tax + totalBeforeTax));
    console.log((total))



    let paymentSummaryHtml =
        `
        <div class="payment-summary-title">
            Order Summary
        </div>

        <div class="payment-summary-row ">
            <div class="js-payment-summary-quantity">Items (${totalCartQuantity}):</div>
            <div class="payment-summary-money js-payment-summary-money">$${formatCurrency(totalMoney)}</div>
        </div>

        <div class="payment-summary-row">
            <div>Shipping &amp; handling:</div>
            <div class="payment-summary-money">$${formatCurrency(totalShipping)}</div>
        </div>

        <div class="payment-summary-row subtotal-row">
            <div>Total before tax:</div>
            <div class="payment-summary-money">$${formatCurrency(totalBeforeTax)}</div>
        </div>

        <div class="payment-summary-row">
            <div>Estimated tax (10%):</div>
            <div class="payment-summary-money">$${formatCurrency(tax)}</div>
        </div>

        <div class="payment-summary-row total-row">
            <div>Order total:</div>
            <div class="payment-summary-money">$${formatCurrency(Number(total))}</div>
        </div>
        
        <button class="place-order-button button-primary">
          Place your order
        </button>
    `
    document.querySelector('.js-payment-summary').innerHTML = paymentSummaryHtml;
}