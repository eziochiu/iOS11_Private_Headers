/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecSportsScoreSummaryCardSection : WBSParsecCardSection {
    WBSParsecSportsScoreSummary * _scoreSummary;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSArray *images;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)_specializedCardSectionSchema;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;
- (id)images;
- (id)subtitle;
- (id)title;

@end
