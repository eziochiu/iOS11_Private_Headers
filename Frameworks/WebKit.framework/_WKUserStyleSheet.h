/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKUserStyleSheet : NSObject <NSCopying, WKObject> {
    struct ObjectStorage<API::UserStyleSheet> { 
        struct type { 
            unsigned char __lx[128]; 
        } data; 
    }  _userStyleSheet;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (nonatomic, readonly, copy) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isForMainFrameOnly, nonatomic, readonly) bool forMainFrameOnly;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *source;
@property (readonly) Class superclass;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (id)baseURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithSource:(id)arg1 forMainFrameOnly:(bool)arg2;
- (id)initWithSource:(id)arg1 forMainFrameOnly:(bool)arg2 legacyWhitelist:(id)arg3 legacyBlacklist:(id)arg4 baseURL:(id)arg5 userContentWorld:(id)arg6;
- (id)initWithSource:(id)arg1 forMainFrameOnly:(bool)arg2 legacyWhitelist:(id)arg3 legacyBlacklist:(id)arg4 userContentWorld:(id)arg5;
- (bool)isForMainFrameOnly;
- (id)source;

@end
