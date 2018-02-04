/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaControlsConfiguration : NSObject <NSSecureCoding> {
    NSString * _presentingAppBundleID;
    NSString * _routingContextUID;
    long long  _style;
}

@property (nonatomic, copy) NSString *presentingAppBundleID;
@property (nonatomic, copy) NSString *routingContextUID;
@property (nonatomic) long long style;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)presentingAppBundleID;
- (id)routingContextUID;
- (void)setPresentingAppBundleID:(id)arg1;
- (void)setRoutingContextUID:(id)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end
