<template>
  <div id="app">
    <!-- <img alt="Vue logo" src="./assets/logo.png"> -->
      <!-- <router-link></router-link> -->
       <!-- <router-view/>
        -->
      <about></about>
      <home></home>
      <forloopsinVue/>
      <passingDataFromComponent/>
      <!-- <about/>
      <home/>
      <forloopsinVue/> -->
  </div>
</template>

<script>
import About from './components/About.vue'
import home from './components/home.vue'
import forloopsinVue from './components/forloopsinVue.vue'
import passingDataFromComponent from './components/passingDataFromComponent'

export default {
  name: 'App',
  components: {
    About,
    home,
    forloopsinVue,
    passingDataFromComponent
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
