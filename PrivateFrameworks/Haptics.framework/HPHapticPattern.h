/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Haptics.framework/Haptics
 */

@interface HPHapticPattern : NSObject {
    NSArray * _events;
}

@property (readonly) NSArray *events;

- (void).cxx_destruct;
- (id)eventListFromDictionary:(id)arg1 error:(id*)arg2;
- (id)eventListFromEvents:(id)arg1 parameters:(id)arg2 error:(id*)arg3;
- (id)events;
- (id)init;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithEvents:(id)arg1 parameters:(id)arg2 error:(id*)arg3;

@end
