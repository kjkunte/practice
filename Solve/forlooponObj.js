let foods = {
    apples: 25,
    oranges: 32,
    plums: 28,
    bananas: 13,
    grapes: 35,
    strawberries: 27
  };
  
  function checkInventory(scannedItem) {
    // Only change code below this line
    //  
//     var output = Object.keys(foods).map(function(key) =>  foods['scannedItem']})
//        return output;
//     // Only change code above this line
Object.keys(foods).forEach((key,index)=>{
    if(key === scannedItem){
       console.log('hi')
    return foods[key]
    } 
  })
  }
  
  console.log(checkInventory("apples"));