/* made by EzioChiu.
 */

@protocol _CDContextInternal <_CDContext>

@required

- (_CDContextValue *)propertiesForContextualKeyPath:(_CDContextualKeyPath *)arg1;
- (void)setContextValue:(_CDContextValue *)arg1 forContextualKeyPath:(_CDContextualKeyPath *)arg2;
- (_CDContextValue *)setObject:(NSObject<NSCopying><NSSecureCoding> *)arg1 returningMetadataForContextualKeyPath:(_CDContextualKeyPath *)arg2;

@end
