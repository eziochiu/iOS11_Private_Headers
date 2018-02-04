/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARURLToTopicsMaps : NSObject {
    NSDictionary * _urlToTopicScores;
    NSString * _version;
}

@property (nonatomic, readonly) NSDictionary *urlToTopicScores;
@property (nonatomic, readonly) NSString *version;

+ (id)responseFromJSON:(id)arg1;

- (void).cxx_destruct;
- (id)urlToTopicScores;
- (id)version;

@end
