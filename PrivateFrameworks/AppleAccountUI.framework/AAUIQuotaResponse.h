/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIQuotaResponse : AAResponse {
    NSDictionary * _endPoints;
    NSDictionary * _quotaInfo;
    NSArray * _usage;
}

@property (nonatomic, readonly) NSNumber *availableStorageInBytes;
@property (nonatomic, readonly) bool hasMaxTier;
@property (nonatomic, readonly) NSArray *iCloudMediaUsage;
@property (nonatomic, readonly) NSURL *manageStorageURL;
@property (nonatomic, readonly) NSNumber *totalStorageInByes;
@property (nonatomic, readonly) NSArray *usage;
@property (nonatomic, readonly) NSNumber *usedStorageInBytes;

- (void).cxx_destruct;
- (id)availableStorageInBytes;
- (bool)hasMaxTier;
- (id)iCloudMediaUsage;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)manageStorageURL;
- (id)totalStorageInByes;
- (id)usage;
- (id)usedStorageInBytes;

@end
