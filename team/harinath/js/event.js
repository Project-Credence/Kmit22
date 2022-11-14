const EventEmitter = require('node:events');

class MyEmitter extends EventEmitter {}

const myEmitter = new MyEmitter();
myEmitter.on('wf', () => {
  console.log('an event occurred!');
  setTimeout(()=>{
  console.log('a big event occurred');
  },3000)
});
console.log('rum');
myEmitter.emit('wf');
console.log('rum');