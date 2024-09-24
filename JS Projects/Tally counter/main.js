let count = 0;
let readings = [];
const countEl = document.getElementById("count-el");
const readingEl = document.getElementById("reading-el");

function increment() {
  count++;
  countEl.innerText = count;
}

function reset() {
  count = 0;
  countEl.innerText = count;
}

function mark() {
  readings.push(count);
  readingEl.innerText = "readings: " + readings.join(", ");
}
