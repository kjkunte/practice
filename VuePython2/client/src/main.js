// https://codeburst.io/full-stack-single-page-application-with-vue-js-and-flask-b1e036315532
import Vue from 'vue'
import App from './App.vue'
import routes from './router'
// import Chartkick from 'vue-chartkick'
// import Chart from 'chart.js'

Vue.config.productionTip = false
// Vue.use(Chartkick.use(Chart))

new Vue({
  routes,
  components : {
    // forloopsinVue
  },
  render: h => h(App)
}).$mount('#app')
