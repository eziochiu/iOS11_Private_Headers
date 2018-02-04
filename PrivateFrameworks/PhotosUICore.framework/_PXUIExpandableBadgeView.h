/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXUIExpandableBadgeView : UIView <_PXUIBadgeViewDelegate> {
    NSMutableArray * _badgeViews;
    <_PXUIExpandableBadgeViewDelegate> * _delegate;
    bool  _expanded;
    PXUIFlyingBadge * _flyingBadge;
    bool  _isExpandable;
    _PXUIBadgeView * _mainBadgeView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
    bool  _shouldDisappear;
}

@property (nonatomic, readonly) NSMutableArray *badgeViews;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_PXUIExpandableBadgeViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic, readonly) PXUIFlyingBadge *flyingBadge;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isExpandable;
@property (setter=_setMainBadgeView:, nonatomic, retain) _PXUIBadgeView *mainBadgeView;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic) bool shouldDisappear;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setMainBadgeView:(id)arg1;
- (void)_updateLayout;
- (void)badgeView:(id)arg1 userDidSelectBadge:(unsigned long long)arg2;
- (bool)badgeViewShouldRespondToUserSelection:(id)arg1;
- (id)badgeViews;
- (id)delegate;
- (id)flyingBadge;
- (id)initWithFlyingBadge:(id)arg1;
- (bool)isExpandable;
- (bool)isExpanded;
- (id)mainBadgeView;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct CGPoint { double x1; double x2; })position;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShouldDisappear:(bool)arg1;
- (bool)shouldDisappear;

@end