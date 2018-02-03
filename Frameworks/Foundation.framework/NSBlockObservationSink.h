/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSBlockObservationSink : NSObservationSink {
    id  _block;
    id  _observers;
    int  _tag;
}

- (id*)_observerStorage;
- (void)_receiveBox:(id)arg1;
- (void)dealloc;
- (id)initWithBlock:(id)arg1 tag:(int)arg2;

@end
