// Question 1
// var result = 110;

// if(result <0 || result<33){
//     console.log("Failed, grade: F");
// }
// else if(result>=33 && result<40){
//     console.log("grade: D")
// }

// else if(result>=40 && result<50){
//     console.log("grade: C")
// }
// else if(result>=50 && result<60){
//     console.log("grade: B")
// }
// else if(result>=60 && result<70){
//     console.log("grade: A-")
// }
// else if(result>=70 && result<80){
//     console.log("grade: A")
// }
// else if(result>=80 && result<100){
//     console.log("grade: A+")
// }

// else {
//     console.log("Invalid input")
// }

// Question 2

// function oddEven(a){
//     const n =a;
//     if(n==0){
//         console.log(a, "is Nutral number");
//     }
//     else if(a%2==0){
//         console.log(a, "is Even number");
//     }
//     else{
//         console.log(a, "is Odd number")
//     }
// }

// const x =50;
// oddEven(x)

// Question number 3

// const numbers = [ 7,  2, 11, 19,  3,  8,  1, 12,  9, 14,  6, 20, 13, 17, 16, 15,  4, 18, 10,  5 ];
// numbers.sort(function(x, y){return x - y});
// console.log("Now it is sorted:", numbers);


// Question number 4


// function isLeapYear(y) {
//     if((y %4 == 0 && y%100 !=0) || y %400 == 0){

//         console.log(`${y} is a leap year.`);
//     }
//     else{
//         console.log(`${y} is not a leap year.`);
//     }
// }

// const year = 2032;

// isLeapYear(parseInt(year));

// Question number 5


// for (let i = 1; i <= 50; i++) {
    
//     if (i % 3 == 0 && i % 5 == 0) {
//         console.log(i);  
//     }
// }

// Question number 6

// Array of names


// function LName(f) {
//     let longestName = f[0];

//     for (let i = 0; i < f.length; i++) {
//         if (f[i].length > longestName.length) {
//             longestName = f[i]; 
//         }
//     }
//     return longestName;
// }


// const fNames = ["Aman", "Joni", "Emamul karim", "kafi", "Alaminn"];
// const longest = LName(fNames);
// console.log(`The longest name is: ${longest}`);


// Question 7


// const array = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];

// const uniqueArray = [...new Set(array)];

// console.log(uniqueArray);


// Question number 8

function LName(a) {
    let largNumber = a[0];

    for (let i = 0; i < a.length; i++) {
        if (a[i] > largNumber){
            largNumber = a[i]; 
        }
    }
    return largNumber;
}


const array = [1, 2, 3, 3, 4, 4, 5, 6, 7, 80, 9, 10];
const largest = LName(array);
console.log(`The largest number is: ${largest}`);