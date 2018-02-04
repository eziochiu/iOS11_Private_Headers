/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSValidationSigningResult : NSObject {
    NSError * _error;
    NSData * _resultData;
    NSData * _serverKey;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSData *resultData;
@property (nonatomic, readonly) NSData *serverKey;

- (void).cxx_destruct;
- (id)error;
- (id)initWithResultData:(id)arg1 serverKey:(id)arg2 error:(id)arg3;
- (id)resultData;
- (id)serverKey;

@end
