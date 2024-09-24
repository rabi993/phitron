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

