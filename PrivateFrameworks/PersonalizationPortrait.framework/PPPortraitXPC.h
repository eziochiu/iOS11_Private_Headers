/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPPortraitXPC : NSObject

+ (void)coreRoutineEnableStateWithCompletion:(id /* block */)arg1;
+ (void)donateLabeledStrings:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 documentId:(id)arg4 completion:(id /* block */)arg5;
+ (void)entitiesDeletedSinceDate:(id)arg1 completion:(id /* block */)arg2;
+ (void)registerXPCListenerWithDeletionTrackingHandler:(id)arg1;
+ (void)registerXPCListenerWithStringDonationHandler:(id)arg1;
+ (void)voiceAssistantEnableStateWithCompletion:(id /* block */)arg1;

@end
