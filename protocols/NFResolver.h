/* made by EzioChiu.
 */

@protocol NFResolver <NSObject>

@required

- (id)resolveClass:(Class)arg1;
- (id)resolveClass:(Class)arg1 name:(NSString *)arg2;
- (id)resolveProtocol:(Protocol *)arg1;
- (id)resolveProtocol:(Protocol *)arg1 name:(NSString *)arg2;
- (id)unsafeResolveForKey:(NSString *)arg1 name:(NSString *)arg2;

@end
