/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLXPCTransaction : NSObject {
    const char * _identifier;
}

+ (void)_startTrackingTransaction:(id)arg1;
+ (void)_stopTrackingTransaction:(id)arg1;
+ (id)callStackSymbols;
+ (void)discardCallStackSymbols:(id)arg1;
+ (void)initialize;
+ (id)openXPCTransactionStatus;
+ (id)transaction:(const char *)arg1;

- (id)_statusDescription;
- (void)dealloc;
- (id)description;
- (id)initWithIdentifier:(const char *)arg1;
- (void)stillAlive;

@end
