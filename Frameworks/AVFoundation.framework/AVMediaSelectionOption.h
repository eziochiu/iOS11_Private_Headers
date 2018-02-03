/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMediaSelectionOption : NSObject <NSCopying> {
    AVMediaSelectionOptionInternal * _mediaSelectionOption;
}

@property (nonatomic, readonly) NSArray *availableMetadataFormats;
@property (nonatomic, readonly) NSArray *commonMetadata;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *extendedLanguageTag;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSArray *mediaSubTypes;
@property (nonatomic, readonly) NSString *mediaType;
@property (getter=isPlayable, nonatomic, readonly) bool playable;
@property (nonatomic, readonly) AVAssetTrack *track;
@property (nonatomic, readonly) int trackID;
@property (nonatomic, readonly) NSString *unicodeLanguageCode;
@property (nonatomic, readonly) NSString *unicodeLanguageIdentifier;

+ (bool)_plistHasOptionIdentifier:(id)arg1;
+ (id)mediaSelectionOptionForAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 hasUnderlyingTrack:(bool)arg4;

- (id)_ancillaryDescription;
- (id)_displayNameWithLocale:(id)arg1 fallingBackToMatchingUndeterminedAndMultilingual:(bool)arg2;
- (id)_groupID;
- (id)_groupMediaCharacteristics;
- (id)_groupMediaType;
- (bool)_isAuxiliaryContent;
- (bool)_isDesignatedDefault;
- (bool)_isMainProgramContent;
- (id)_preferredMetadataTitleAccordingToPreferredLanguages:(id)arg1 fallingBackToMatchingEmptyLocale:(bool)arg2;
- (id)_taggedMediaCharacteristics;
- (id)_title;
- (id)_track;
- (id)associatedExtendedLanguageTag;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)associatedPersistentIDs;
- (id)associatedUnicodeLanguageIdentifier;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionary;
- (id)displayName;
- (id)displayNameWithLocale:(id)arg1;
- (bool)displaysNonForcedSubtitles;
- (id)extendedLanguageTag;
- (id)fallbackIDs;
- (id)group;
- (bool)hasMediaCharacteristic:(id)arg1;
- (id)init;
- (id)initWithGroup:(id)arg1;
- (bool)isPlayable;
- (id)languageCode;
- (id)locale;
- (id)mediaCharacteristics;
- (id)mediaSubTypes;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;
- (id)optionID;
- (id)outOfBandIdentifier;
- (id)outOfBandSource;
- (id)propertyList;
- (id)track;
- (int)trackID;
- (id)unicodeLanguageCode;
- (id)unicodeLanguageIdentifier;

@end
