function avg(arr) {
  let sum = 0;
  arr.forEach((element) => {
    sum += element;
  });
  return sum / arr.length;
}
//module.exports = avg;
module.exports = {
  average: avg,
  name: "Rizu",
};
