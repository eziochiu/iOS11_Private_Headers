/* made by EzioChiu.
 */

@protocol _SFPBSportsTeam <NSObject>

@required

- (NSString *)accessibilityDescription;
- (bool)hasAccessibilityDescription;
- (bool)hasLogo;
- (bool)hasName;
- (bool)hasRecord;
- (bool)hasScore;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBImage *)logo;
- (NSString *)name;
- (NSString *)record;
- (NSString *)score;
- (void)setAccessibilityDescription:(NSString *)arg1;
- (void)setLogo:(_SFPBImage *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setRecord:(NSString *)arg1;
- (void)setScore:(NSString *)arg1;

@end
