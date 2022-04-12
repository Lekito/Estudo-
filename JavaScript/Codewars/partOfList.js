// Write a function partlist that gives all the ways to divide a list (an array) of at least two elements into two non-empty parts.

// Each two non empty parts will be in a pair (or an array for languages without tuples or a structin C - C: see Examples test Cases - )
// Each part will be in a string
// Elements of a pair must be in the same order as in the original array.

let arr = ["I", "wish", "I", "hadn't", "come"]

function partlist(arr) {
    var newArray;
    var returnArray = [];
    for (var i = 1; i < arr.length; i++) {
        newArray = [];
        newArray.push(arr.slice(0, i).join(" "));
        newArray.push(arr.slice(i).join(" "));
        returnArray.push(newArray);
    }
    console.log(returnArray)
    return returnArray;
}

partlist(arr)

// var partlist=a=>a.map((v,i)=>[a.slice(0,i).join(' '),a.slice(i).join(' ')]).slice(1)

// function partlist(arr){
//     arr = arr.map((_, i)=> [arr.slice(0,i+1).join(' '), arr.slice(i+1).join(' ')])
//     arr.pop();
//     return arr
//   }


//   const partlist = arr => arr
//   .reduce((a,p,i) => {
//     if (i < arr.length-1) {
//       a[i].push(arr.slice(0,i+1).join(' '), arr.slice(i+1).join(' '));
//       a.push([])
//     }
//     return a;
//   },[[]])
//   .filter(arr => arr.length)


//   function partlist(arr) {
//     var parts = [];
//     for(var i = 1; i < arr.length; i++) {
//       parts.push([arr.slice(0, i).join(' '), arr.slice(i, arr.length).join(' ')]);
//     }
//     return parts;
//   }