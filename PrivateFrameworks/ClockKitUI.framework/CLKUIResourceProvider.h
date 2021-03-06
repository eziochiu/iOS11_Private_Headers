/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIResourceProvider : NSObject {
    <CLKUIResourceProviderDelegate> * _delegate;
    NSMutableSet * _uuidHistory;
}

@property (nonatomic, readonly) <CLKUIResourceProviderDelegate> *delegate;
@property (nonatomic, readonly) NSSet *uuidHistory;

- (void).cxx_destruct;
- (void)addUuidToHistory:(id)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)uuidHistory;

@end
