/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSuicaPassProperties : NSObject {
    PKFelicaPassProperties * _felicaProperties;
}

@property (getter=isBlacklisted, nonatomic, readonly) bool blacklisted;
@property (getter=isGreenCarTicketUsed, nonatomic, readonly) bool greenCarTicketUsed;
@property (getter=isInShinkansenStation, nonatomic, readonly) bool inShinkansenStation;
@property (getter=isInStation, nonatomic, readonly) bool inStation;
@property (nonatomic, readonly, copy) NSDecimalNumber *transitBalance;
@property (nonatomic, readonly, copy) NSString *transitBalanceCurrencyCode;

+ (id)passPropertiesForPass:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithProperties:(id)arg1;
- (bool)isBlacklisted;
- (bool)isGreenCarTicketUsed;
- (bool)isInShinkansenStation;
- (bool)isInStation;
- (id)transitBalance;
- (id)transitBalanceCurrencyCode;

@end