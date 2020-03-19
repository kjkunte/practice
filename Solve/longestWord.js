function findLongestWordLength(str) {
  var str1 = '';
  str1 = str.split('');
//  console.log(str1.length)
  var arr = []
  arr.push(str.length)
  var diff = 0 
  for(var i = str1.length-1; i>=0; i--){
    if(str1[i] === ' '){
      arr.push(i);       
    }
  }
  arr.push(-1)
  for(var j = 0; j<=arr.length; j++){
    // diff = arr[j]-arr[j+1]
    if(diff<arr[j]-arr[j+1]){
      diff = arr[j]-arr[j+1]
      // console.log(diff)
    }
  }
  // console.log(arr);
  console.log(diff -1);
  return (diff -1);
}

findLongestWordLength("The quick brown fox jumped over the lazy dog");

  