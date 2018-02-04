/* made by EzioChiu.
 */

@protocol SXLinkActionHandlerDelegate <SXActionHandlerDelegate>

@required

- (void)linkActionHandlerWantsToOpenInAppURL:(SXActionHandler *)arg1;

@optional

- (bool)linkActionHandler:(SXActionHandler *)arg1 allowOpeningOfURLInSafari:(NSURL *)arg2;
- (NSURL *)linkActionHandler:(SXActionHandler *)arg1 presentableURLForURL:(NSURL *)arg2;

@end
