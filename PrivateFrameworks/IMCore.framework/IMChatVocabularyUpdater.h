/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMChatVocabularyUpdater : NSObject {
    IMChatRegistry * _chatRegistry;
    INVocabulary * _vocabulary;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithChatRegistry:(id)arg1 vocabulary:(id)arg2;
- (void)syncAllGroupNames:(id)arg1;

@end
