/* made by EzioChiu.
 */

@protocol FBSystemServiceFacilityClient <NSObject>

@required

+ (id)facilityClientWithSystemServiceClient:(id <FBSystemServiceClient>)arg1;

- (<FBSystemServiceClient> *)systemServiceClient;

@end
