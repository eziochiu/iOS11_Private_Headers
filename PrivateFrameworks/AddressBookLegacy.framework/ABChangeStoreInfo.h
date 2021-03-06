/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABChangeStoreInfo : NSObject {
    NSString * _minConsumedClientIdentifier;
    int  _minConsumedSequenceNumber;
    int  _secondMinConsumedSequenceNumber;
}

@property (nonatomic, retain) NSString *minConsumedClientIdentifier;
@property (nonatomic) int minConsumedSequenceNumber;
@property (nonatomic) int secondMinConsumedSequenceNumber;

- (void)dealloc;
- (id)description;
- (id)minConsumedClientIdentifier;
- (int)minConsumedSequenceNumber;
- (int)secondMinConsumedSequenceNumber;
- (void)setMinConsumedClientIdentifier:(id)arg1;
- (void)setMinConsumedSequenceNumber:(int)arg1;
- (void)setSecondMinConsumedSequenceNumber:(int)arg1;

@end
