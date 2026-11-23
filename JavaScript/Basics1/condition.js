const temperature = 32;

if (temperature > 30) {
  console.log("It is hot outside.");
}


const age = 16;

if (age >= 18) {
  console.log("Eligible to vote.");
} else {
  console.log("Not eligible to vote yet.");
}


const score = 82;

if (score >= 90) {
  console.log("Grade: A");
} else if (score >= 75) {
  console.log("Grade: B");
} else if (score >= 50) {
  console.log("Grade: C");
} else {
  console.log("Grade: F");
}
// Output: "Grade: B"


const hasTicket = true;
const hasID = true;

if (hasTicket && hasID) {
  console.log("Welcome to the event!");
} else {
  console.log("Entry denied.");
}
