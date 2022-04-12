// You will be given an array of objects (hashes in ruby) representing data about developers who have signed up to attend the coding meetup that you are organising for the first time.

// Your task is to return the number of JavaScript developers coming from Europe.

// function countDevelopers(list) {
//     x=0;
//   for(i=0;i<list.length;i++){
//     if(((list[i].continent)==='Europe')&&((list[i].language)==="JavaScript")){
//       x+=1
//     }
//   }
//     return x
//   }

//   const countDevelopers = list => (
//     list.filter(({continent, language}) => continent === 'Europe' && language === 'JavaScript').length
//   )

//   function countDevelopers(list) {
//     return list.reduce((count, dev) => 
//       (dev.continent === 'Europe' && dev.language === 'JavaScript')
//         ? count + 1 : count
//       , 0);
//   }

//   function countDevelopers(list) {
//     return list
//       .filter(dev => dev.language === "JavaScript")
//       .filter(dev => dev.continent === "Europe")
//       .length
//   }

//   function countDevelopers(list) {
//     return list.filter(x=>x.continent=='Europe'&&x.language=='JavaScript').length
//   }
