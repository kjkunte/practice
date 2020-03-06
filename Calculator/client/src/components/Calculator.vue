<template>
  <div class='calculator'>
    <div class='display'>{{current || 0}}</div>
    <!--here click is the callback  -->
    <div @click="clear" class = "button">AC</div>
    <div @click="sign" class = "button">+/-</div>
    <div @click="percent" class = "button">%</div>
    <div class = "button operator">/</div>
    <div class = "button">7</div>
    <div class = "button">8</div>
    <div class = "button">9</div>
    <div class = "button operator">*</div>
    <div class = "button">4</div>
    <div class = "button">5</div>
    <div class = "button">6</div>
    <div class = "button operator">-</div>
    <div class = "button">1</div>
    <div class = "button">2</div>
    <div class = "button">3</div>
    <div class = "button operator">+</div>
    <div class = "button zero">0</div>
    <div class = "button">.</div>
    <div class = "button operator">=</div>
  </div>
</template>

/**/
this is a view compoment
Also method is an attribute where you can add the methods for 
defined on callbacks of the button
*/
<script>
export default {
  data(){
    return {
      current: 'hello world'
    }
  },
  method:{
    clear() {
      this.current = ''
    },
    sign() {
      this.current = this.current.charAt(0) === '-'?
        this.current.slice(1) : `-${this.current}`;
    },
    percent() {
      this.current = `${parseFloat(this.current) / 100}`;
    }
  }
}
</script>

<!-- Add "scoped" attribute to limit CSS to this component only -->
<style scoped>
.calculator {
  margin: 0 auto;
  width: 400px;
  font-size: 40px;
  display: grid;
  grid-template-columns: repeat(4,1fr);
  grid-auto-rows: minmax(50px, auto);
}

.display {
  grid-column: 1 / 5;
  background-color: #333;
  color: white
}

.zero{
  grid-column: 1/3
}

.button {
  background-color: #eee;
  border: 1px solid #333
}

.operator {
  background-color : orange;
  color: white;
}
</style>
