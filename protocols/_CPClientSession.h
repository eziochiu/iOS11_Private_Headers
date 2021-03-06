/* made by EzioChiu.
 */

@protocol _CPClientSession <NSObject>

@required

- (void)addFeedback:(_CPParsecFeedback *)arg1;
- (NSString *)agent;
- (void)clearFeedback;
- (_CPParsecFeedback *)feedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)feedbackCount;
- (NSArray *)feedbacks;
- (double)firstUseDate;
- (bool)firstUseOfTheDay;
- (bool)getResourceVersions:(id*)arg1 forKey:(NSString *)arg2;
- (bool)hasAgent;
- (bool)hasFirstUseDate;
- (bool)hasFirstUseOfTheDay;
- (bool)hasPreviousSessionEndReason;
- (bool)hasRemoveTimestamps;
- (bool)hasSessionStart;
- (bool)hasUserGuidString;
- (bool)hasVersion;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (int)previousSessionEndReason;
- (bool)removeTimestamps;
- (NSDictionary *)resourceVersions;
- (double)sessionStart;
- (void)setAgent:(NSString *)arg1;
- (void)setFeedbacks:(NSArray *)arg1;
- (void)setFirstUseDate:(double)arg1;
- (void)setFirstUseOfTheDay:(bool)arg1;
- (void)setPreviousSessionEndReason:(int)arg1;
- (void)setRemoveTimestamps:(bool)arg1;
- (void)setResourceVersions:(NSDictionary *)arg1;
- (void)setResourceVersions:(NSString *)arg1 forKey:(NSString *)arg2;
- (void)setSessionStart:(double)arg1;
- (void)setUserGuidString:(NSString *)arg1;
- (void)setVersion:(NSString *)arg1;
- (NSString *)userGuidString;
- (NSString *)version;

@end
