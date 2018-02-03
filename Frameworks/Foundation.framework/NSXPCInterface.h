/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSXPCInterface : NSObject {
    Protocol * _protocol;
    id  _reserved1;
    void * _reserved2;
}

@property Protocol *protocol;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)interfaceWithProtocol:(id)arg1;
+ (id)signatureForBlock:(id)arg1;

- (id)_allowedClassesForSelector:(SEL)arg1 reply:(bool)arg2;
- (Class)_customSubclass;
- (id)_generateAndCacheMethodSignatureForRemoteSelector:(SEL)arg1;
- (bool)_hasProxiesInArgumentsOfSelector:(SEL)arg1;
- (bool)_hasProxiesInReplyBlockArgumentsOfSelector:(SEL)arg1;
- (id)_interfaceForArgument:(unsigned long long)arg1 ofSelector:(SEL)arg2 reply:(bool)arg3;
- (void)_methodSignature:(id*)arg1 allowedClasses:(id*)arg2 forSelector:(SEL)arg3 isReply:(bool)arg4;
- (id)_methodSignatureForRemoteSelector:(SEL)arg1;
- (id)_methodSignatureForReplyBlockOfSelector:(SEL)arg1;
- (unsigned long long)_remoteVersion;
- (unsigned long long)_respondsToRemoteSelector:(SEL)arg1;
- (Class)_returnClassForSelector:(SEL)arg1;
- (Class)classForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3;
- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (id)interfaceForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3;
- (id)protocol;
- (id)replyBlockSignatureForSelector:(SEL)arg1;
- (void)setClass:(Class)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;
- (void)setInterface:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;
- (void)setProtocol:(id)arg1;
- (void)setReplyBlockSignature:(id)arg1 forSelector:(SEL)arg2;
- (void)setVersion:(unsigned long long)arg1 forSelector:(SEL)arg2;
- (void)set_remoteVersion:(unsigned long long)arg1;
- (unsigned long long)version;
- (unsigned long long)versionForSelector:(SEL)arg1;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

- (void)ls_setArgumentClasses:(id)arg1 replyClasses:(id)arg2 forSelector:(SEL)arg3;

@end
