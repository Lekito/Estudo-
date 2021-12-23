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

const eMenorQueCinco = (numero) => {
  return numero < 5
}

const newPets = pets.filter((pet) =>{
  return eMenorQueCinco(pet.age)
})

console.log(newPets)