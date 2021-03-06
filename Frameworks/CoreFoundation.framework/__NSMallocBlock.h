/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSMallocBlock : NSBlock

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
