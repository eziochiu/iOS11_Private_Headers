/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSPair : NSObject {
    id  _first;
    id  _second;
}

@property (nonatomic, readonly) id first;
@property (nonatomic, readonly) id second;

- (void).cxx_destruct;
- (id)first;
- (void)getFirst:(id*)arg1 second:(id*)arg2;
- (id)init;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (id)second;

@end