/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTRequest : ASTSealablePayload {
    long long  _clientStatus;
    NSDictionary * _clientStatusToString;
    NSNumber * _currentTest;
    NSDictionary * _data;
    ASTErrorStatus * _error;
    NSNumber * _progress;
}

@property (nonatomic) long long clientStatus;
@property (nonatomic, retain) NSDictionary *clientStatusToString;
@property (nonatomic, retain) NSNumber *currentTest;
@property (nonatomic, retain) NSDictionary *data;
@property (nonatomic, retain) ASTErrorStatus *error;
@property (nonatomic, retain) NSNumber *progress;

+ (id)request;

- (void).cxx_destruct;
- (long long)clientStatus;
- (id)clientStatusToString;
- (id)currentTest;
- (id)data;
- (id)description;
- (id)error;
- (id)generatePayload;
- (id)init;
- (id)progress;
- (void)setClientStatus:(long long)arg1;
- (void)setClientStatusToString:(id)arg1;
- (void)setCurrentTest:(id)arg1;
- (void)setData:(id)arg1;
- (void)setError:(id)arg1;
- (void)setProgress:(id)arg1;

@end
