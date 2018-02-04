/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebsiteDataRecord : NSObject <WKObject> {
    struct ObjectStorage<API::WebsiteDataRecord> { 
        struct type { 
            unsigned char __lx[144]; 
        } data; 
    }  _websiteDataRecord;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (nonatomic, readonly) _WKWebsiteDataSize *_dataSize;
@property (nonatomic, readonly, copy) NSSet *dataTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (id)_dataSize;
- (id)dataTypes;
- (void)dealloc;
- (id)description;
- (id)displayName;

@end