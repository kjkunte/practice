// https://codeburst.io/full-stack-single-page-application-with-vue-js-and-flask-b1e036315532
import Vue from 'vue'
import App from './App.vue'
import routes from './router'

Vue.config.productionTip = false

new Vue({
  routes,
  components : {
    // forloopsinVue
  },
  render: h => h(App)
}).$mount('#app')
