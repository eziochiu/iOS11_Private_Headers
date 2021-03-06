/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSavedStoriesGroupEmitterOperation : FCFeedGroupEmittingOperation {
    long long  _desiredArticlesCount;
}

@property (nonatomic) long long desiredArticlesCount;

- (long long)desiredArticlesCount;
- (void)performOperation;
- (void)setDesiredArticlesCount:(long long)arg1;

@end
