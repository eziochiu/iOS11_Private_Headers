/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSTouchIconResponse : WBSSiteMetadataResponse {
    UIColor * _extractedBackgroundColor;
    bool  _generated;
    UIImage * _touchIcon;
}

@property (nonatomic, readonly) UIColor *extractedBackgroundColor;
@property (getter=isGenerated, nonatomic, readonly) bool generated;
@property (nonatomic, readonly) UIImage *touchIcon;

+ (id)responseWithURL:(id)arg1 touchIcon:(id)arg2 generated:(bool)arg3 extractedBackgroundColor:(id)arg4;

- (void).cxx_destruct;
- (id)description;
- (id)extractedBackgroundColor;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 touchIcon:(id)arg2 generated:(bool)arg3 extractedBackgroundColor:(id)arg4;
- (bool)isGenerated;
- (id)touchIcon;

@end