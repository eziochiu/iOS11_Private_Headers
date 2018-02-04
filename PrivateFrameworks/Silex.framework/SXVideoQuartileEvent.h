/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoQuartileEvent : SXMediaEvent {
    unsigned long long  _quartile;
}

@property (nonatomic, readonly) unsigned long long quartile;

- (id)initWithQuartile:(unsigned long long)arg1;
- (unsigned long long)quartile;

@end