var btn1 = document.getElementById('btn1');
var btn2 = document.getElementById('btn2');
var btn3 = document.getElementById('btn3');
var btn4 = document.getElementById('btn4');
var btn5 = document.getElementById('btn5');
var btn6 = document.getElementById('btn6');
var btn7 = document.getElementById('btn7');
var btn8 = document.getElementById('btn8');
var btn9 = document.getElementById('btn9');



/* This sets the action to perform on a click event */
btn5.onclick = function() {
    let tmp1 = btn1.innerHTML;
    let tmp2 = btn2.innerHTML;
    let tmp3 = btn3.innerHTML;
    let tmp4 = btn4.innerHTML;
    let tmp6 = btn6.innerHTML;
    let tmp7 = btn7.innerHTML;
    let tmp8 = btn8.innerHTML;
    let tmp9 = btn9.innerHTML;
    
    btn1.innerHTML = tmp4;
    btn2.innerHTML = tmp1;
    btn3.innerHTML = tmp2;
    btn4.innerHTML = tmp7;
    btn6.innerHTML = tmp3;
    btn7.innerHTML = tmp8;
    btn8.innerHTML = tmp9;
    btn9.innerHTML = tmp6;

};
