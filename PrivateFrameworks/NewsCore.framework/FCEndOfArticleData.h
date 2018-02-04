/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCEndOfArticleData : NSObject {
    NSArray * _allTopics;
    FCStreamingResults * _publisherHeadlines;
    FCStreamingResults * _relatedHeadlines;
}

@property (nonatomic, retain) NSArray *allTopics;
@property (nonatomic, retain) FCStreamingResults *publisherHeadlines;
@property (nonatomic, retain) FCStreamingResults *relatedHeadlines;

- (void).cxx_destruct;
- (id)allTopics;
- (id)publisherHeadlines;
- (id)relatedHeadlines;
- (void)setAllTopics:(id)arg1;
- (void)setPublisherHeadlines:(id)arg1;
- (void)setRelatedHeadlines:(id)arg1;

@end
