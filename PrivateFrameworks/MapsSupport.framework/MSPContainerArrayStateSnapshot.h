/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPContainerArrayStateSnapshot : NSObject <MSPContainerStateSnapshot> {
    NSArray * _contents;
}

@property (nonatomic, readonly, copy) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contents;
- (id)init;
- (id)initWithContents:(id)arg1;

@end
