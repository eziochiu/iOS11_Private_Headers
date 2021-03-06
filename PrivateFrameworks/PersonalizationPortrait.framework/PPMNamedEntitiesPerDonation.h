/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPMNamedEntitiesPerDonation : NSObject {
    PETDistributionEventTracker * _tracker;
}

@property (nonatomic, readonly) PETDistributionEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(double)arg1 source:(struct PPMNamedEntityDonationSource_ { unsigned long long x1; })arg2 algorithm:(struct PPMNamedEntityAlgorithm_ { unsigned long long x1; })arg3;
- (id)tracker;

@end
