const resultsEl = document.getElementById("results-el");

function calculate(operator) {
  const operand1 = Number(document.getElementById("operand1").value);
  const operand2 = Number(document.getElementById("operand2").value);
  let result;

  switch (operator) {
    case "+":
      result = operand1 + operand2;
      break;
    case "-":
      result = operand1 - operand2;
      break;
    case "*":
      result = operand1 * operand2;
      break;
    case "/":
      result = operand1 / operand2;
      break;
  }

  resultsEl.innerText = result;
}
