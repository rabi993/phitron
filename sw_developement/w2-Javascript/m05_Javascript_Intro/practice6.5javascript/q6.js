// Question number 6




function LName(f) {
    let longestName = f[0];

    for (let i = 0; i < f.length; i++) {
        if (f[i].length > longestName.length) {
            longestName = f[i]; 
        }
    }
    return longestName;
}


const fNames = ["Aman", "Joni", "Emamul karim", "kafi", "Alaminn"];
const longest = LName(fNames);
console.log(`The longest name is: ${longest}`);
