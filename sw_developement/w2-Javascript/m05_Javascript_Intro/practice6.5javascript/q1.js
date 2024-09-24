// Question 1
var result = 110;

if(result <0 || result<33){
    console.log("Failed, grade: F");
}
else if(result>=33 && result<40){
    console.log("grade: D")
}

else if(result>=40 && result<50){
    console.log("grade: C")
}
else if(result>=50 && result<60){
    console.log("grade: B")
}
else if(result>=60 && result<70){
    console.log("grade: A-")
}
else if(result>=70 && result<80){
    console.log("grade: A")
}
else if(result>=80 && result<100){
    console.log("grade: A+")
}

else {
    console.log("Invalid input")
}
