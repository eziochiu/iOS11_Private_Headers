/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGXpcTransaction : NSObject {
    struct atomic_flag { 
        bool _Value; 
    }  _done;
}

- (void)dealloc;
- (void)done;
- (id)init;
- (void)setTimeout:(double)arg1;

@end
