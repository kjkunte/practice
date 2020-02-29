function filteredArray(arr, elem) {
    let newArr = [];
    // change code below this line
    // newArr = [...arr]
      for (let i = 0; i<arr.length; i++){
          console.log('1st for' + i);
        for (let j = 0; j<arr[i].length;j++){
            console.log('2nd for' + arr[i])
          if(arr[i][j] === elem)
          {
            console.log('delete' + arr[i])
            // console
            arr.splice(i,1)
            i-- // This addition operation can be avoided if we travese the intial for loop in reverse order
            // Baaammm!!!!! I can write the logic
            break
          }
        }
      }
      newArr = [...arr]
    // for(let k = 0; k<arr.length; k++){
    //     console.log(arr[k]);
    // }
    // change code above this line
    return newArr;
  }
  
  // change code here to test different cases:
  console.log(filteredArray([ ["amy", "beth", "sam"], ["dave", "sean", "peter"] ], "peter"));