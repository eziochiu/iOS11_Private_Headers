/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAttachmentCollectionManager : NSObject {
    IMChat * _chat;
    <CKAttachmentCollectionManagerDelegate> * _delegate;
    NSArray * _otherContentsItems;
    NSArray * _photosVideosItems;
    NSArray * _webLinksItems;
}

@property (nonatomic, retain) IMChat *chat;
@property (nonatomic) <CKAttachmentCollectionManagerDelegate> *delegate;
@property (nonatomic, retain) NSArray *otherContentsItems;
@property (nonatomic, retain) NSArray *photosVideosItems;
@property (nonatomic, retain) NSArray *webLinksItems;

- (void).cxx_destruct;
- (void)_updateCollections;
- (id)chat;
- (void)chatItemsChanged:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteAttachmentItems:(id)arg1;
- (id)guidFromChatItem:(id)arg1;
- (id)initWithChat:(id)arg1;
- (id)otherContentsItems;
- (id)photosVideosItems;
- (void)setChat:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOtherContentsItems:(id)arg1;
- (void)setPhotosVideosItems:(id)arg1;
- (void)setWebLinksItems:(id)arg1;
- (id)webLinksItems;

@end
