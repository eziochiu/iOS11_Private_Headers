/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSLazyPlugInPropertyList : _LSLazyPropertyList {
    _LSLazyPropertyList * _infoPlist;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _mergeLock;
    NSDictionary * _mergedPlist;
    _LSLazyPropertyList * _sdkPlist;
}

+ (bool)supportsSecureCoding;

- (bool)_getPropertyList:(id*)arg1;
- (bool)_getValue:(id*)arg1 forPropertyListKey:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfoPlist:(id)arg1 SDKPlist:(id)arg2;

@end