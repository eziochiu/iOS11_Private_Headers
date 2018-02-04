/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTracklistReverseEnumerator : NSEnumerator {
    NSMutableArray * _contexts;
    NSMutableArray * _entriesToEmit;
    NSMutableArray * _nextEmittableEnumerationResults;
    unsigned long long  _options;
    _MPTracklistProxyEntry * _startEntryProxy;
    MPTracklist * _tracklist;
}

@property (nonatomic, retain) NSMutableArray *contexts;
@property (nonatomic, retain) NSMutableArray *entriesToEmit;
@property (nonatomic, retain) NSMutableArray *nextEmittableEnumerationResults;
@property (nonatomic) unsigned long long options;
@property (nonatomic, readonly) MPTracklist *tracklist;

- (void).cxx_destruct;
- (id)_initWithTracklist:(id)arg1 options:(unsigned long long)arg2 startingEntry:(id)arg3;
- (id)_startEntryProxy;
- (id)contexts;
- (id)entriesToEmit;
- (id)initWithTracklist:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithTracklist:(id)arg1 options:(unsigned long long)arg2 startingAtItem:(id)arg3 inSection:(id)arg4;
- (id)nextEmittableEnumerationResults;
- (id)nextObject;
- (unsigned long long)options;
- (void)setContexts:(id)arg1;
- (void)setEntriesToEmit:(id)arg1;
- (void)setNextEmittableEnumerationResults:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (id)tracklist;

@end