/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSDestination : NSObject <IDSDestinationProtocol, NSCopying>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultPairedDeviceDestination;
+ (id)destinationWithAlias:(id)arg1 pushToken:(id)arg2;
+ (id)destinationWithDestinations:(id)arg1;
+ (id)destinationWithGroup:(id)arg1;
+ (id)destinationWithString:(id)arg1;
+ (id)destinationWithStrings:(id)arg1;
+ (id)destinationWithURI:(id)arg1;
+ (id)sentinelSelfAliasDestination;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destinationURIs;
- (void)encodeWithCoder:(id)arg1;
- (id)groupID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDestination:(id)arg1;

@end
