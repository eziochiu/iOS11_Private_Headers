/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLRecommendationWidgetTileInfo : NFLWidgetTileInfo {
    bool  _defaultForYou;
    NSString * _identifier;
    long long  _widgetType;
}

@property (nonatomic, readonly) bool defaultForYou;
@property (nonatomic, readonly) long long widgetType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)defaultForYou;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 widgetType:(long long)arg2 defaultForYou:(bool)arg3;
- (id)initWithWidgetType:(long long)arg1 defaultForYou:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (long long)widgetType;

@end
