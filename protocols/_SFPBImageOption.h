/* made by EzioChiu.
 */

@protocol _SFPBImageOption <NSObject>

@required

- (NSString *)defaultValue;
- (bool)hasDefaultValue;
- (bool)hasName;
- (bool)hasOptions;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)name;
- (_SFPBStringDictionary *)options;
- (void)setDefaultValue:(NSString *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setOptions:(_SFPBStringDictionary *)arg1;

@end
