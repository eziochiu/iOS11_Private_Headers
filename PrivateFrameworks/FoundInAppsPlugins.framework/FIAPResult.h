/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FoundInAppsPlugins.framework/FoundInAppsPlugins
 */

@interface FIAPResult : NSObject {
    NSArray * _entities;
    NSError * _error;
    NSArray * _historicalDataRequests;
}

@property (nonatomic, readonly) NSArray *entities;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *historicalDataRequests;

+ (id)resultWithEntities:(id)arg1 historicalDataRequests:(id)arg2 error:(id)arg3;
+ (id)success;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entities;
- (id)error;
- (unsigned long long)hash;
- (id)historicalDataRequests;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntities:(id)arg1 historicalDataRequests:(id)arg2 error:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToResult:(id)arg1;

@end