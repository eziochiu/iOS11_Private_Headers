/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface _ICQServiceSpecification : NSObject {
    NSString * _serviceDescription;
    NSString * _serviceImageID;
}

@property (nonatomic, retain) NSString *serviceDescription;
@property (nonatomic, retain) NSString *serviceImageID;

+ (id)serviceSpecificationsSampleForLevel:(long long)arg1;

- (void).cxx_destruct;
- (id)serviceDescription;
- (id)serviceImageID;
- (void)setServiceDescription:(id)arg1;
- (void)setServiceImageID:(id)arg1;

@end