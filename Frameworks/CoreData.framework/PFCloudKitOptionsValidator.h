/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitOptionsValidator : NSObject {
    NSCloudKitMirroringDelegateOptions * _parsedOptions;
}

@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *parsedOptions;

- (bool)_validateAssetThreshold:(id)arg1 error:(id*)arg2;
- (bool)_validateContainerIdentifier:(id)arg1 error:(id*)arg2;
- (bool)_validateContainerOptions:(id)arg1 error:(id*)arg2;
- (bool)_validateHistoryTrackingOptions:(id)arg1 error:(id*)arg2;
- (bool)_validateMemoryThreshold:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)parsedOptions;
- (bool)validateOptions:(id)arg1 andStoreOptions:(id)arg2 error:(id*)arg3;

@end
