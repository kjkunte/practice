<template>
  <div id="app">
    <!-- <img alt="Vue logo" src="./assets/logo.png"> -->
      <about/>
      <home/>
      <forloopsinVue/>
      <!-- <router-view/> -->
  </div>
</template>

<script>
import About from './components/About.vue'
import home from './components/home.vue'
import forloopsinVue from './components/forloopsinVue.vue'

export default {
  name: 'App',
  components: {
    About,
    home,
    forloopsinVue
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
