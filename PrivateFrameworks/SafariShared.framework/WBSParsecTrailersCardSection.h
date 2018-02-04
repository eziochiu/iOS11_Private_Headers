/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecTrailersCardSection : WBSParsecCardSection {
    NSString * _title;
    NSArray * _trailers;
}

@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NSArray *trailers;

+ (id)_specializedCardSectionSchema;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;
- (id)title;
- (id)trailers;

@end
