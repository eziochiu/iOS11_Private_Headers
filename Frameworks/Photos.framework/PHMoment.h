/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMoment : PHAssetCollection {
    NSData * _approximateLocationData;
    short  _generationType;
    NSDate * _modificationDate;
    NSDate * _representativeDate;
    NSData * _reverseLocationData;
    bool  _reverseLocationDataContainsLocation;
    bool  _reverseLocationDataIsValid;
}

@property (nonatomic, readonly) short generationType;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) NSDate *representativeDate;

+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (void).cxx_destruct;
- (void)_decodeTitlesIfNeeded;
- (id)approximateLocation;
- (bool)canPerformEditOperation:(long long)arg1;
- (bool)canShowAvalancheStacks;
- (Class)changeRequestClass;
- (bool)collectionHasFixedOrder;
- (id)description;
- (short)generationType;
- (bool)hasLocalizedTitle;
- (bool)hasLocationInfo;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)isMeaningful;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)modificationDate;
- (id)representativeDate;

@end
