/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBApplicationSnapshotFetchRequest : NSObject <BSDescriptionProviding> {
    XBApplicationSnapshotGenerationContext * _fallbackGenerationContext;
    XBApplicationSnapshotPredicate * _predicate;
    NSArray * _sortDescriptors;
}

@property (nonatomic, readonly, copy) NSArray *NSSortDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) XBApplicationSnapshotGenerationContext *fallbackGenerationContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) XBApplicationSnapshotPredicate *predicate;
@property (nonatomic, copy) NSArray *sortDescriptors;
@property (readonly) Class superclass;

+ (id)fetchRequest;

- (void).cxx_destruct;
- (id)NSSortDescriptors;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)fallbackGenerationContext;
- (id)predicate;
- (void)setFallbackGenerationContext:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end