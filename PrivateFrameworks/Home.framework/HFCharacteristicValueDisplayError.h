/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCharacteristicValueDisplayError : NSObject {
    unsigned long long  _category;
    <HFCharacteristicOperationContextProviding> * _contextProvider;
    NSError * _underlyingError;
}

@property (nonatomic) unsigned long long category;
@property (nonatomic, retain) <HFCharacteristicOperationContextProviding> *contextProvider;
@property (getter=isPersistentError, nonatomic, readonly) bool persistentError;
@property (nonatomic, copy) NSError *underlyingError;

+ (id)errorWithUnderlyingError:(id)arg1 readTraits:(id)arg2 contextProvider:(id)arg3;

- (void).cxx_destruct;
- (unsigned long long)category;
- (id)contextProvider;
- (bool)isPersistentError;
- (void)setCategory:(unsigned long long)arg1;
- (void)setContextProvider:(id)arg1;
- (void)setUnderlyingError:(id)arg1;
- (id)underlyingError;

@end
