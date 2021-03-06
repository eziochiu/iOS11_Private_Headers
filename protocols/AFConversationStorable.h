/* made by EzioChiu.
 */

@protocol AFConversationStorable <NSObject>

@required

- (NSString *)aceCommandIdentifier;
- (AceObject *)aceObject;
- (AFDataStore *)associatedDataStore;
- (AFDialogPhase *)dialogPhase;
- (NSUUID *)identifier;
- (bool)isVirgin;
- (long long)presentationState;
- (NSUUID *)revisionIdentifier;
- (long long)type;

@end
