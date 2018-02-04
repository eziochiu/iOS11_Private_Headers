/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface _HFAccessorySettingsValueManagerTransaction : NSObject {
    HMAccessorySetting * _setting;
    NSNumber * _transactionNumber;
    id  _value;
    NAFuture * _writeFuture;
}

@property (nonatomic, retain) HMAccessorySetting *setting;
@property (nonatomic, retain) NSNumber *transactionNumber;
@property (nonatomic, copy) id value;
@property (nonatomic, retain) NAFuture *writeFuture;

- (void).cxx_destruct;
- (id)init;
- (void)setSetting:(id)arg1;
- (void)setTransactionNumber:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setWriteFuture:(id)arg1;
- (id)setting;
- (id)transactionNumber;
- (id)value;
- (id)writeFuture;

@end
