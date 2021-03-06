/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIBannerContext : NSObject {
    bool  _isValid;
    SBUIBannerItem * _item;
    <SBUIBannerSource> * _source;
    <SBUIBannerTarget> * _target;
}

@property (nonatomic, readonly) SBUIBannerItem *item;
@property (nonatomic, readonly) <SBUIBannerSource> *source;
@property (nonatomic, readonly) <SBUIBannerTarget> *target;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (id)description;
- (id)initWithItem:(id)arg1 source:(id)arg2 target:(id)arg3;
- (void)invalidate;
- (bool)isValid;
- (id)item;
- (id)source;
- (id)target;

@end
