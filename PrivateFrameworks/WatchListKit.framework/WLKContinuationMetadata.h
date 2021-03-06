/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKContinuationMetadata : NSObject {
    NSString * _context;
    WLKBasicContentMetadata * _currentEpisode;
    NSString * _deleteID;
    bool  _isPurchase;
    bool  _isRental;
    NSString * _localizedContext;
    WLKBasicContentMetadata * _movieOrShowContent;
    WLKPlayEvent * _playEvent;
    WLKPlayable * _playable;
    WLKBasicContentMetadata * _showParent;
}

@property (nonatomic, readonly, copy) NSString *context;
@property (nonatomic, readonly) WLKBasicContentMetadata *currentEpisode;
@property (nonatomic, readonly, copy) NSString *deleteID;
@property (nonatomic, readonly) bool isPurchase;
@property (nonatomic, readonly) bool isRental;
@property (nonatomic, readonly, copy) NSString *localizedContext;
@property (nonatomic, readonly) WLKBasicContentMetadata *movieOrShowContent;
@property (nonatomic, readonly) WLKPlayEvent *playEvent;
@property (nonatomic, readonly) WLKPlayable *playable;
@property (nonatomic, readonly) WLKBasicContentMetadata *showParent;

- (void).cxx_destruct;
- (id)context;
- (id)currentEpisode;
- (id)deleteID;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)isPurchase;
- (bool)isRental;
- (id)localizedContext;
- (id)movieOrShowContent;
- (id)playEvent;
- (id)playable;
- (id)showParent;

@end
