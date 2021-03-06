/* made by EzioChiu.
 */

@protocol SGIntervalTreeProtocol <JSExport>

@required

- (id)init;
- (NSArray *)query:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (void)remove:(NSString *)arg1;
- (void)store:(unsigned long long)arg1 end:(unsigned long long)arg2 key:(NSString *)arg3;

@optional

- (NSArray *)query:(unsigned long long)arg1 end:(unsigned long long)arg2 __JS_EXPORT_AS__query:(id)arg3;
- (void)store:(unsigned long long)arg1 end:(unsigned long long)arg2 key:(NSString *)arg3 __JS_EXPORT_AS__store:(id)arg4;

@end
