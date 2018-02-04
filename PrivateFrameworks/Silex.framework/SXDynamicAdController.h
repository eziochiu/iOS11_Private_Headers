/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDynamicAdController : NSObject <SXDynamicAdController> {
    <SXAdvertisingSettings> * _advertismentSettings;
    SXContext * _context;
    NSIndexSet * _excludedPlacementAreas;
    NSHashTable * _processedLayoutDataProviders;
}

@property (nonatomic, readonly) <SXAdvertisingSettings> *advertismentSettings;
@property (nonatomic, retain) SXContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSIndexSet *excludedPlacementAreas;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *processedLayoutDataProviders;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adPlacementsForLayoutBlueprint:(id)arg1;
- (id)advertismentSettings;
- (bool)allowPlacementBetweenComponent:(id)arg1 andSucceedingComponent:(id)arg2;
- (bool)canPlaceAdsForBlueprint:(id)arg1 layoutDataProvider:(id)arg2;
- (id)context;
- (double)determineStartingPositionFromInitialPosition:(double)arg1 forBlueprint:(id)arg2;
- (id)excludedAreasInLayoutBlueprint:(id)arg1;
- (id)excludedPlacementAreas;
- (id)findComponentForStartPosition:(double)arg1 actualPosition:(double*)arg2 currentPath:(id)arg3 inLayoutBlueprint:(id)arg4;
- (id)findComponentsAboveYPosition:(double)arg1 inLayoutBlueprint:(id)arg2;
- (id)initWithContext:(id)arg1 andAdvertismentSettings:(id)arg2;
- (bool)isImageClassification:(id)arg1;
- (bool)isPosition:(double)arg1 inLayoutBlueprint:(id)arg2;
- (bool)isValidStartPosition:(double)arg1 forBlueprint:(id)arg2;
- (void)placeAdsForBlueprint:(id)arg1 layoutDataProvider:(id)arg2;
- (bool)placementPossibleForPosition:(double)arg1 excludingColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inLayoutBlueprint:(id)arg3;
- (id)processedLayoutDataProviders;
- (void)setContext:(id)arg1;
- (void)setExcludedPlacementAreas:(id)arg1;

@end
