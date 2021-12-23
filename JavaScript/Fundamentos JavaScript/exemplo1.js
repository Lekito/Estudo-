let array = [0,1,4,3,9]
let models = []

for( var i = 0; i < array.length; i++){
  if(array.indexOf(array[i]) === i) {
    models.push(array[i] )
  }
}
console.log(array)
console.log(models)
