/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISCreateAccountPromptOperation : ISOperation {
    NSString * _reason;
    long long  _responseType;
}

@property (nonatomic, retain) NSString *reason;
@property (nonatomic) long long responseType;

- (void).cxx_destruct;
- (id)_newCreateAccountDialog;
- (id)init;
- (id)initWithReason:(id)arg1;
- (id)reason;
- (long long)responseType;
- (void)run;
- (void)setReason:(id)arg1;
- (void)setResponseType:(long long)arg1;

@end
