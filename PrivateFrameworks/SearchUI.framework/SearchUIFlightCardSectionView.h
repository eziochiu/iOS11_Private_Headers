/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIFlightCardSectionView : SearchUICardSectionView <FUFlightViewControllerDelegate> {
    FUFlightViewController * _flightViewController;
    unsigned long long  _lastSelectedLegIndex;
}

@property (retain) NUIContainerBoxView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) FUFlightViewController *flightViewController;
@property (readonly) unsigned long long hash;
@property unsigned long long lastSelectedLegIndex;
@property (retain) SFFlightCardSection *section;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)flightController:(id)arg1 didSelectLeg:(long long)arg2 ofFlight:(long long)arg3;
- (id)flightViewController;
- (id)initWithCardSection:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
- (unsigned long long)lastSelectedLegIndex;
- (void)setFlightViewController:(id)arg1;
- (void)setLastSelectedLegIndex:(unsigned long long)arg1;
- (id)setupContentView;
- (bool)spansFullWidth;
- (void)updateChevronVisible:(bool)arg1 leaveSpaceForChevron:(bool)arg2;

@end