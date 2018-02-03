/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSXPCCoder : NSCoder {
    id  _reserved1;
    <NSObject> * _userInfo;
}

@property (readonly) NSXPCConnection *connection;
@property (retain) <NSObject> *userInfo;

+ (id)_testEncodeAndDecodeInvocation:(id)arg1 interface:(id)arg2;
+ (id)_testEncodeAndDecodeObject:(id)arg1 allowedClass:(Class)arg2;
+ (id)_testEncodeAndDecodeObject:(id)arg1 allowedClasses:(id)arg2;

- (id)connection;
- (void)dealloc;
- (id)decodeXPCObjectForKey:(id)arg1;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s { }*)arg1 forKey:(id)arg2;
- (void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (bool)requiresSecureCoding;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
