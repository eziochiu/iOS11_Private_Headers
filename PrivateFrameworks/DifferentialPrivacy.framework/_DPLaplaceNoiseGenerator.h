/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPLaplaceNoiseGenerator : NSObject {
    double  _b;
}

@property (nonatomic, readonly) double b;

+ (id)zeroMeanLaplaceNoiseGenerator:(double)arg1;

- (double)b;
- (id)description;
- (id)init;
- (id)initWithScale:(double)arg1;
- (double)sample;

@end
