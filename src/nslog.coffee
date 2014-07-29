NSLog = require('../build/Release/nslog.node')
util = require('util')

module.exports = (args...) ->
  NSLog.log(util.format(args...))
