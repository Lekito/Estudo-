const pets = [
  {
    name: 'rex',
    type: 'dog',
    age: 10
  },
  {
    name: 'miau',
    type: 'cat',
    age: 2
  },
  {
    name: 'gulp',
    type: 'fish',
    age: 1
  }
]

console.log(pets)

const newPets = pets.filter((pet) =>{
  return pet.age < 5 
})

console.log(newPets)