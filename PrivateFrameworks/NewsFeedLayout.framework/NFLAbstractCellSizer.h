/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLAbstractCellSizer : NSObject {
    NFLFeedSettings * _feedSettings;
    NFLAbstractCellPropertyProvider * _propertyProvider;
}

@property (nonatomic) NFLFeedSettings *feedSettings;
@property (nonatomic, retain) NFLAbstractCellPropertyProvider *propertyProvider;

- (void).cxx_destruct;
- (id)feedSettings;
- (id)init;
- (id)initWithFeedSettings:(id)arg1;
- (id)layoutDataForTileInfo:(id)arg1 template:(id)arg2 columnSpan:(unsigned long long)arg3 showAccessoryText:(bool)arg4;
- (id)propertyProvider;
- (void)setFeedSettings:(id)arg1;
- (void)setPropertyProvider:(id)arg1;

@end
