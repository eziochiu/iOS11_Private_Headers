/* made by EzioChiu.
 */

@protocol MiroBlueprintTitleStyleProtocol <NSObject>

@required

- (NSString *)effectID;
- (NSString *)fontName;
- (NSDictionary *)parametersDictionary;
- (bool)titleRequestsColorAnalysis;

@end
