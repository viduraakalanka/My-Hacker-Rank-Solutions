 /* Get the element with id='btn' */
var htmlButton = document.getElementById('btn');


/* This sets the action to perform on a click event */
htmlButton.onclick = function() {
    /* This changes the button's label */
    htmlButton.innerHTML++; 
};
