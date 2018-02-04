/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTSection : NSObject <NSCopying, NSSecureCoding, NTSectionDisplayDescriptor> {
    NTPBSectionDisplayDescriptor * _displayDescriptor;
    NSOrderedSet * _headlines;
    NSString * _identifier;
    NSString * _personalizationFeatureID;
    SFRankingFeedback * _rankingFeedback;
    NSString * _referralBarName;
}

@property (nonatomic, readonly, copy) NSString *backgroundGradientColor;
@property (nonatomic, readonly, copy) NSString *discoverMoreVideosSubtitle;
@property (nonatomic, readonly, copy) NSString *discoverMoreVideosTitle;
@property (nonatomic, readonly, copy) NSURL *discoverMoreVideosURL;
@property (nonatomic, copy) NTPBSectionDisplayDescriptor *displayDescriptor;
@property (nonatomic, readonly) bool displaysAsVideoPlaylist;
@property (nonatomic, copy) NSOrderedSet *headlines;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *nameColor;
@property (nonatomic, readonly, copy) NSString *personalizationFeatureID;
@property (nonatomic, copy) SFRankingFeedback *rankingFeedback;
@property (nonatomic, copy) NSString *referralBarName;
@property (nonatomic, readonly) bool videoPlaysMutedByDefault;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundGradientColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)discoverMoreVideosSubtitle;
- (id)discoverMoreVideosTitle;
- (id)discoverMoreVideosURL;
- (id)displayDescriptor;
- (bool)displaysAsVideoPlaylist;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)headlines;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 personalizationFeatureID:(id)arg2 headlines:(id)arg3 rankingFeedback:(id)arg4 displayDescriptor:(id)arg5 referralBarName:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)nameColor;
- (id)personalizationFeatureID;
- (id)rankingFeedback;
- (id)referralBarName;
- (void)setDisplayDescriptor:(id)arg1;
- (void)setHeadlines:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRankingFeedback:(id)arg1;
- (void)setReferralBarName:(id)arg1;
- (bool)videoPlaysMutedByDefault;

@end
