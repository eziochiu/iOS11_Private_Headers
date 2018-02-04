/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFDataStoreQuery : NSObject {
    id /* block */  _error;
    id /* block */  _preparation;
    NSString * _query;
    id /* block */  _step;
}

@property (nonatomic, copy) id /* block */ error;
@property (nonatomic, copy) id /* block */ preparation;
@property (nonatomic, copy) NSString *query;
@property (nonatomic, copy) id /* block */ step;

+ (id)query;

- (void).cxx_destruct;
- (id /* block */)error;
- (id /* block */)preparation;
- (id)query;
- (void)setError:(id /* block */)arg1;
- (void)setPreparation:(id /* block */)arg1;
- (void)setQuery:(id)arg1;
- (void)setStep:(id /* block */)arg1;
- (id /* block */)step;

@end
