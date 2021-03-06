/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADAdSpaceEventInfo : NSObject <NSSecureCoding> {
    bool  _adReused;
    long long  _lastErrorCode;
    unsigned long long  _screenfuls;
    unsigned long long  _slotPosition;
}

@property (nonatomic) bool adReused;
@property (nonatomic) long long lastErrorCode;
@property (nonatomic) unsigned long long screenfuls;
@property (nonatomic) unsigned long long slotPosition;

+ (bool)supportsSecureCoding;

- (bool)adReused;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecipient:(id)arg1;
- (long long)lastErrorCode;
- (unsigned long long)screenfuls;
- (void)setAdReused:(bool)arg1;
- (void)setLastErrorCode:(long long)arg1;
- (void)setScreenfuls:(unsigned long long)arg1;
- (void)setSlotPosition:(unsigned long long)arg1;
- (unsigned long long)slotPosition;

@end
