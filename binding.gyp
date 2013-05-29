{
  "targets": [
    {
      "target_name": "nslog",
      "sources": [ "src/nslog_mac.mm" ],
      'link_settings': {
        'libraries': [
          '$(SDKROOT)/System/Library/Frameworks/AppKit.framework',
        ],
      }
    }
  ]
}
