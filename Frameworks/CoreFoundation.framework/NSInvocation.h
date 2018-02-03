/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSInvocation : NSObject {
    id  _container;
    void * _frame;
    unsigned char  _reserved;
    unsigned char  _retainedArgs;
    void * _retdata;
    id  _signature;
}

@property (readonly) bool argumentsRetained;
@property (readonly, retain) NSMethodSignature *methodSignature;
@property SEL selector;
@property id target;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)_invocationWithMethodSignature:(id)arg1 frame:(void*)arg2;
+ (id)invocationWithMethodSignature:(id)arg1;
+ (unsigned long long)requiredStackSizeForSignature:(id)arg1;

- (void)_addAttachedObject:(id)arg1;
- (id)_initWithMethodSignature:(id)arg1 frame:(void*)arg2 buffer:(void*)arg3 size:(unsigned long long)arg4;
- (bool)argumentsRetained;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)getArgument:(void*)arg1 atIndex:(long long)arg2;
- (void)getReturnValue:(void*)arg1;
- (id)init;
- (void)invoke;
- (void)invokeSuper;
- (void)invokeUsingIMP:(int (*)arg1;
- (void)invokeWithTarget:(id)arg1;
- (id)methodSignature;
- (void)retainArguments;
- (SEL)selector;
- (void)setArgument:(void*)arg1 atIndex:(long long)arg2;
- (void)setReturnValue:(void*)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (bool)_hasBlockArgument;
- (id)debugDescription;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (void)_webkit_invokeAndHandleException:(id)arg1;

@end
