/* made by EzioChiu.
 */

@protocol _SFPBMoreResults <NSObject>

@required

- (bool)hasLabel;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)label;
- (void)setLabel:(NSString *)arg1;

@end