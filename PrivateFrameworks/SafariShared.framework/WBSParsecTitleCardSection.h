/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecTitleCardSection : WBSParsecCardSection {
    NSString * _subtitleText;
    NSString * _titleText;
}

@property (nonatomic, readonly, copy) NSString *subtitleText;
@property (nonatomic, readonly, copy) NSString *titleText;

+ (id)_specializedCardSectionSchema;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;
- (id)subtitleText;
- (id)titleText;

@end
