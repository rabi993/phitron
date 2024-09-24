
function calculateSavings(payments, livingCost) {

    if(!Array.isArray(payments) || typeof livingCost != 'number') {
        return "invalid input";
    }
    
    let sum = 0;

    for(let i = 0; i< payments.length; i++){

        if(payments[i]>= 3000){
            sum += payments[i] *0.8;
        }
        else{
            sum += payments[i];
        }
        
    }
    
    const savings = sum  - livingCost; 

    if(savings >= 0) {
        return savings; 
    } 
    else{
        return "earn more"; 
    }
}

console.log(calculateSavings([1000, 2000, 3000], 5400)); 
console.log(calculateSavings([1000, 2000, 2500], 5000)); 
console.log(calculateSavings([900, 2700, 3400], 10000)); 
console.log(calculateSavings(100, [900, 2700, 3400]));   
console.log(calculateSavings( [900, 2700, 3400] , 'ftg'));   