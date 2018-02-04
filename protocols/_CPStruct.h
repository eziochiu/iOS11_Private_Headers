/* made by EzioChiu.
 */

@protocol _CPStruct <NSObject>

@required

- (NSDictionary *)fields;
- (bool)getFields:(id*)arg1 forKey:(NSString *)arg2;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setFields:(NSDictionary *)arg1;
- (void)setFields:(_CPValue *)arg1 forKey:(NSString *)arg2;

@end
