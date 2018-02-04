/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUIDisambiguationAnalyticsManager : NSObject {
    <AFUIDisambiguationAnalyticsManagerDataSource> * _dataSource;
    <AFDisambiguationAssistance> * _disambiguationAssistance;
    NSArray * _listItems;
}

@property (nonatomic) <AFUIDisambiguationAnalyticsManagerDataSource> *dataSource;
@property (nonatomic, retain) <AFDisambiguationAssistance> *disambiguationAssistance;
@property (nonatomic, retain) NSArray *listItems;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_allListItems;
- (id)_listItemMatchingAceId:(id)arg1;
- (void)_logDisambiguationSelectedEventWithListItem:(id)arg1;
- (void)_recordSASMetrics:(id)arg1 withSelectedBundleId:(id)arg2 originalCommandId:(id)arg3;
- (id)dataSource;
- (id)disambiguationAssistance;
- (id)listItems;
- (void)logDisambiguationDismissedEvent;
- (void)logDisambiguationItemSelected:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDisambiguationAssistance:(id)arg1;
- (void)setListItems:(id)arg1;

@end