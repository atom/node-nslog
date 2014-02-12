NSLog = require('bindings')('nslog.node')
util = require('util')

module.exports = (args...) ->
  NSLog.log(util.format(args...))
