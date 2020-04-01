<template>
  <div id="app">
    <!-- <img alt="Vue logo" src="./assets/logo.png"> -->
      <!-- <router-link></router-link> -->
       <!-- 
        -->
      <about></about>
      <home></home>
      <forloopsinVue/>
      <test/>
      <blog/>
  </div>
</template>

<script>
import About from './components/About.vue'
import home from './components/home.vue'
import forloopsinVue from './components/forloopsinVue.vue'
// import clickButton from './components/button'
import test from './components/test'
import blog from './components/blog'

export default {
  name: 'App',
  components: {
    About,
    home,
    forloopsinVue,
    // clickButton,
    test,
    blog
  }
}
</script>

<style>
#app {
  font-family: Avenir, Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 60px;
}
</style>
