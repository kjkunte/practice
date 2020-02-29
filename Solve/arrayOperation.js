function filteredArray(arr, elem) {
    let newArr = [];
    // change code below this line
    // newArr = [...arr]
      for (let i = 0; i<arr.length; i++){
          console.log('1st for' + i);
        for (let j = 0; j<arr[i].length;j++){
            console.log('2nd for')
          if(arr[i][j] == elem)
          {
            console.log('delete')
            arr.splice(arr[i],1)
            i--
            break
          }
        }
      }
    //   newArr = [...arr]
    for(let k = 0; k<arr.length; k++){
        console.log(arr[k]);
    }
    // change code above this line
    return newArr;
  }
  
  // change code here to test different cases:
  console.log(filteredArray([[3, 2, 3], [1, 6, 0], [3, 13, 26], [19, 3, 9]], 3));