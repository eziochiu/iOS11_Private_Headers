/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPriorityRelevanceProvider : NTKRelevanceProvider {
    float  _priority;
}

@property (nonatomic, readonly) float priority;

- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithPriority:(float)arg1;
- (bool)isEqual:(id)arg1;
- (float)priority;

@end
