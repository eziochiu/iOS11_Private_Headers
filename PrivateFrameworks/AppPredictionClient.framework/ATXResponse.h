/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXResponse : NSObject <NSSecureCoding> {
    NSData * _cacheFileData;
    NSError * _error;
    NSArray * _predictions;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSData *cacheFileData;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *predictedApps;
@property (nonatomic, readonly) NSArray *predictions;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cacheFileData;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAtxSearchResults:(id /* block */)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredictions:(id)arg1 cacheFileData:(id)arg2 error:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)json;
- (id)jsonDescription;
- (id)jsonRawData;
- (id)predictedApps;
- (id)predictions;
- (id)uuid;

@end
