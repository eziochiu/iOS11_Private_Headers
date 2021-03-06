/* made by EzioChiu.
 */

@protocol _SFPBMonogramImage <NSObject>

@required

- (bool)hasMonogramLetters;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)monogramLetters;
- (void)setMonogramLetters:(NSString *)arg1;

@end
