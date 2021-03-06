/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelStoreBrowseSection : MPModelObject {
    bool  _brick;
    NSURL * _loadAdditionalContentURL;
    bool  _memberOfChartSet;
    MPModelStoreBrowseResponse * _previouslyRetrievedNestedResponse;
    long long  _sectionType;
    NSString * _title;
    long long  _uniformContentItemType;
}

@property (getter=isBrick, nonatomic) bool brick;
@property (nonatomic, copy) NSURL *loadAdditionalContentURL;
@property (getter=isMemberOfChartSet, nonatomic) bool memberOfChartSet;
@property (nonatomic, retain) MPModelStoreBrowseResponse *previouslyRetrievedNestedResponse;
@property (nonatomic) long long sectionType;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long uniformContentItemType;

+ (id)__MPModelStoreBrowseSectionPropertyBrick__PROPERTY;
+ (id)__MPModelStoreBrowseSectionPropertyLoadAdditionalContentURL__PROPERTY;
+ (id)__MPModelStoreBrowseSectionPropertyMemberOfChartSet__PROPERTY;
+ (id)__MPModelStoreBrowseSectionPropertyPreviouslyRetrievedNestedResponse__PROPERTY;
+ (id)__MPModelStoreBrowseSectionPropertyTitle__PROPERTY;
+ (id)__MPModelStoreBrowseSectionPropertyType__PROPERTY;
+ (id)__MPModelStoreBrowseSectionPropertyUniformContentItemType__PROPERTY;
+ (id)__brick__KEY;
+ (id)__loadAdditionalContentURL__KEY;
+ (id)__memberOfChartSet__KEY;
+ (id)__previouslyRetrievedNestedResponse__KEY;
+ (id)__sectionType__KEY;
+ (id)__title__KEY;
+ (id)__uniformContentItemType__KEY;

- (void).cxx_destruct;
- (id)descriptionWithType:(long long)arg1;
- (unsigned long long)hash;
- (bool)isBrick;
- (bool)isEqual:(id)arg1;
- (bool)isMemberOfChartSet;
- (id)loadAdditionalContentURL;
- (id)previouslyRetrievedNestedResponse;
- (long long)sectionType;
- (void)setBrick:(bool)arg1;
- (void)setLoadAdditionalContentURL:(id)arg1;
- (void)setMemberOfChartSet:(bool)arg1;
- (void)setPreviouslyRetrievedNestedResponse:(id)arg1;
- (void)setSectionType:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setUniformContentItemType:(long long)arg1;
- (id)title;
- (long long)uniformContentItemType;

@end
