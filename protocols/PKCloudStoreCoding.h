/* made by EzioChiu.
 */

@protocol PKCloudStoreCoding <NSSecureCoding>

@required

- (void)encodeWithCloudStoreCoder:(PKCloudStoreRecord *)arg1;
- (id)initWithCloudStoreCoder:(PKCloudStoreRecord *)arg1;
- (NSDictionary *)recordTypesAndNames;

@end
