/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NURouter : NSObject <NURouter> {
    <NUURLHandler> * _urlHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <NUURLHandler> *urlHandler;

- (void).cxx_destruct;
- (id)initWithURLHandler:(id)arg1;
- (void)routeToNewsAppForYouFeed;
- (id)urlHandler;

@end
