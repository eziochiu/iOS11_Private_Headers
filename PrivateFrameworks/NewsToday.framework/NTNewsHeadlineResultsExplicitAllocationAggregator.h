/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTNewsHeadlineResultsExplicitAllocationAggregator : NSObject <NTHeadlineResultsAggregator> {
    bool  _allowLeadingCell;
    bool  _allowSectionTitles;
    <FCFeedPersonalizing> * _feedPersonalizer;
    NSDate * _filterDate;
    NTPBSectionSlotCostInfo * _nonVideoSectionSlotCostInfo;
    bool  _respectMinMaxLimit;
    double  _slotsLimit;
    NSObject<FCTodayPrivateData> * _todayData;
    NTPBSectionSlotCostInfo * _videoSectionSlotCostInfo;
}

@property (nonatomic) bool allowLeadingCell;
@property (nonatomic) bool allowSectionTitles;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <FCFeedPersonalizing> *feedPersonalizer;
@property (nonatomic, copy) NSDate *filterDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NTPBSectionSlotCostInfo *nonVideoSectionSlotCostInfo;
@property (nonatomic) bool respectMinMaxLimit;
@property (nonatomic) double slotsLimit;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSObject<FCTodayPrivateData> *todayData;
@property (nonatomic, copy) NTPBSectionSlotCostInfo *videoSectionSlotCostInfo;

- (void).cxx_destruct;
- (id)_feedItemsForSection:(id)arg1 feedItems:(id)arg2 previouslyChosenItems:(id)arg3 allowLeadingCell:(bool)arg4 leadingCellArticleID:(id*)arg5 priorClusterIDsInOtherSections:(id)arg6 sectionFeedItemsLimit:(unsigned long long)arg7 otherArticleIDs:(id)arg8 remainingSlots:(double)arg9 slotsUsed:(double*)arg10 noMoreFeedItemsToGive:(bool*)arg11 noRoomForMoreFeedItems:(bool*)arg12;
- (id)_sectionFilterTransformationWithDescriptor:(id)arg1 priorClusterIDsInOtherSections:(id)arg2 priorClusterIDsInSection:(id)arg3 otherArticleIDs:(id)arg4;
- (id)aggregateSections:(id)arg1 feedItemsBySectionDescriptor:(id)arg2;
- (bool)allowLeadingCell;
- (bool)allowSectionTitles;
- (id)feedPersonalizer;
- (id)filterDate;
- (id)init;
- (id)initWithFeedPersonalizer:(id)arg1 nonVideoSectionSlotCostInfo:(id)arg2 videoSectionSlotCostInfo:(id)arg3 allowLeadingCell:(bool)arg4 allowSectionTitles:(bool)arg5 respectMinMaxLimit:(bool)arg6 filterDate:(id)arg7 todayData:(id)arg8 slotsLimit:(double)arg9;
- (id)nonVideoSectionSlotCostInfo;
- (bool)respectMinMaxLimit;
- (void)setAllowLeadingCell:(bool)arg1;
- (void)setAllowSectionTitles:(bool)arg1;
- (void)setFeedPersonalizer:(id)arg1;
- (void)setFilterDate:(id)arg1;
- (void)setNonVideoSectionSlotCostInfo:(id)arg1;
- (void)setRespectMinMaxLimit:(bool)arg1;
- (void)setSlotsLimit:(double)arg1;
- (void)setTodayData:(id)arg1;
- (void)setVideoSectionSlotCostInfo:(id)arg1;
- (double)slotsLimit;
- (id)todayData;
- (id)videoSectionSlotCostInfo;

@end
