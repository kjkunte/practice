// https://codeburst.io/full-stack-single-page-application-with-vue-js-and-flask-b1e036315532
import Vue from 'vue'
import App from './App.vue'

Vue.config.productionTip = false

new Vue({
  render: h => h(App),
}).$mount('#app')
