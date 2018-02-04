/* made by EzioChiu.
 */

@protocol CRFeedbackListener <NSObject>

@optional

- (void)cardSectionViewDidAppearForCardSection:(id <CRCardSection>)arg1 withAppearanceFeedback:(id <CRCardSectionViewAppearanceFeedback>)arg2;
- (void)cardSectionViewDidDisappearForCardSection:(id <CRCardSection>)arg1 withDisappearanceFeedback:(id <CRCardSectionViewDisappearanceFeedback>)arg2;
- (void)cardSectionViewWillAppearForCardSection:(id <CRCardSection>)arg1 withAppearanceFeedback:(id <CRCardSectionViewAppearanceFeedback>)arg2;
- (void)cardViewDidAppearForCard:(id <CRCard>)arg1 withAppearanceFeedback:(id <CRCardViewAppearanceFeedback>)arg2;
- (void)cardViewDidDisappearForCard:(id <CRCard>)arg1 withDisappearanceFeedback:(id <CRCardViewDisappearanceFeedback>)arg2;
- (void)cardViewWillAppearForCard:(id <CRCard>)arg1 withAppearanceFeedback:(id <CRCardViewAppearanceFeedback>)arg2;
- (void)controllerForCard:(id <CRCard>)arg1 didReceiveAsyncCard:(id <CRCard>)arg2 withAsyncCardReceiptFeedback:(id <CRAsyncCardReceiptFeedback>)arg3;
- (void)controllerForCard:(id <CRCard>)arg1 didRequestAsyncCard:(id <CRCard>)arg2 withAsyncCardRequestFeedback:(id <CRAsyncCardRequestFeedback>)arg3;
- (void)userDidEngageCardSection:(id <CRCardSection>)arg1 withEngagementFeedback:(id <CRCardSectionEngagementFeedback>)arg2;

@end