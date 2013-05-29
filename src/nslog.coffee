NSLog = require('bindings')('nslog.node')

module.exports = (stringToLog="") ->
  NSLog.log(stringToLog)
