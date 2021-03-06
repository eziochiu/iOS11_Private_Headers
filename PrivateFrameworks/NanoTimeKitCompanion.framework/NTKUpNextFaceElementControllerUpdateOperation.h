/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextFaceElementControllerUpdateOperation : NTKUpNextElementUpdateOperation {
    unsigned long long  _updateType;
}

@property (nonatomic, readonly) unsigned long long updateType;

+ (id)hideElement:(id)arg1 atIndex:(id)arg2;
+ (id)showElement:(id)arg1 atIndex:(id)arg2;

- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)updateType;

@end
