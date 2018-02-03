/* made by EzioChiu.
 */

@protocol CAMLWriterDelegate <NSObject>

@optional

- (NSString *)CAMLWriter:(CAMLWriter *)arg1 IDForObject:(id)arg2;
- (NSURL *)CAMLWriter:(CAMLWriter *)arg1 URLForResource:(id)arg2;
- (NSString *)CAMLWriter:(CAMLWriter *)arg1 typeForObject:(id)arg2;

@end