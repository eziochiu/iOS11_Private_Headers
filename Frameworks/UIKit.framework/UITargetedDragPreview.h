/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITargetedDragPreview : NSObject <NSCopying> {
    NSDictionary * __springboardParameters;
    bool  __springboardPlatterStyle;
    bool  _defaultPreview;
    _DUIPreview * _duiPreview;
    struct CGPoint { 
        double x; 
        double y; 
    }  _liftAnchorPoint;
    UIDragPreviewParameters * _parameters;
    UIDragPreviewTarget * _target;
    UIView * _view;
    UIView * _viewToSnapshot;
}

@property (nonatomic, readonly) _DUIPreview *_duiPreview;
@property (nonatomic, readonly) id /* block */ _duiPreviewProvider;
@property (nonatomic, copy) NSDictionary *_springboardParameters;
@property (nonatomic) bool _springboardPlatterStyle;
@property (getter=_isDefaultPreview, setter=_setDefaultPreview:, nonatomic) bool defaultPreview;
@property (nonatomic) struct CGPoint { double x1; double x2; } liftAnchorPoint;
@property (nonatomic, readonly, copy) UIDragPreviewParameters *parameters;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) UIDragPreviewTarget *target;
@property (nonatomic, readonly) UIView *view;
@property (getter=_viewToSnapshot, setter=_setViewToSnapshot:, nonatomic) UIView *viewToSnapshot;

+ (id)new;
+ (id)previewForURL:(id)arg1 target:(id)arg2;
+ (id)previewForURL:(id)arg1 title:(id)arg2 target:(id)arg3;

- (void).cxx_destruct;
- (id)_duiPreview;
- (id /* block */)_duiPreviewProvider;
- (bool)_isDefaultPreview;
- (void)_setDefaultPreview:(bool)arg1;
- (void)_setViewToSnapshot:(id)arg1;
- (id)_springboardParameters;
- (bool)_springboardPlatterStyle;
- (id)_untargetedPreview;
- (id)_viewToSnapshot;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1 fromView:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithView:(id)arg1;
- (id)initWithView:(id)arg1 parameters:(id)arg2;
- (id)initWithView:(id)arg1 parameters:(id)arg2 target:(id)arg3;
- (struct CGPoint { double x1; double x2; })liftAnchorPoint;
- (id)parameters;
- (id)retargetedPreviewWithTarget:(id)arg1;
- (void)setLiftAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)set_springboardParameters:(id)arg1;
- (void)set_springboardPlatterStyle:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (void)takeLiftLocation:(struct CGPoint { double x1; double x2; })arg1 fromView:(id)arg2;
- (id)target;
- (id)view;

@end