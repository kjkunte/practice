<template>
  <div id="root">
    <h1> {{greeting}} </h1>
      <!-- <div>
        Sign UP

         <br>
           Here V-bind binds the class .red of the css when the length is less than 2 
          <input v-model="email" v-bind:class="[email.length < 2 ? 'red':'green']">
         <br>
         <button onclick="alert('signed up')" v-bind:disabled="email.length<2">
           Submit
         </button>
        </div> -->
        <div>
          <ul>
            <li v-for="cat in cats" :key="cat.name">{{cat.name}}</li>
          </ul>
        </div>
     </div>
</template>

 
<script>
// Vue implements two way data binding
export default {

  data: () => ({
    greeting: "Hello YZZ",
    count: 0,
    email:'',
    cats: [
      {name: 'kitkat'},
      {name: 'Asshole'},
      {name: 'BigAsshole'}

    ]
  })
}
</script>
<style scoped>
.red {
  border: 2px solid red;
}
.green {
  border: 2px solid green;
}
</style>