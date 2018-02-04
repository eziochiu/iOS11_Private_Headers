/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleActivityManager : NSObject <NUActivityProvider> {
    <NUURLHandler> * _URLHandler;
    <FCHeadlineProviding> * _headline;
    FCReadingHistory * _readingHistory;
    FCReadingList * _readingList;
    FCSubscriptionList * _subscriptionList;
}

@property (nonatomic, readonly) <NUURLHandler> *URLHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FCHeadlineProviding> *headline;
@property (nonatomic, readonly) FCReadingHistory *readingHistory;
@property (nonatomic, readonly) FCReadingList *readingList;
@property (nonatomic, readonly) FCSubscriptionList *subscriptionList;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLHandler;
- (id)activities;
- (id)activityImageForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (id)activityItemSources;
- (id)activityTitleForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (id)activityTypeForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (bool)articleDislikedForHeadline:(id)arg1;
- (bool)articleLikedForHeadline:(id)arg1;
- (bool)articleSavedForHeadline:(id)arg1;
- (bool)channelMutedForHeadline:(id)arg1;
- (id)headline;
- (id)initWithHeadline:(id)arg1 readingHistory:(id)arg2 readingList:(id)arg3 subscriptionList:(id)arg4 URLHandler:(id)arg5;
- (id /* block */)performBlockForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (id)readingHistory;
- (id)readingList;
- (id)subscriptionList;
- (id)supportedActivities;
- (void)toggleArticleDislikeStatusForHeadline:(id)arg1;
- (void)toggleArticleLikeStatusForHeadline:(id)arg1;
- (void)toggleMuteForHeadline:(id)arg1;
- (void)toggleSaveForHeadline:(id)arg1;

@end
