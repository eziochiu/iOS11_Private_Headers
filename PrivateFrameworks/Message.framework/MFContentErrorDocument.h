/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFContentErrorDocument : NSObject {
    NSError * _error;
}

@property (nonatomic, readonly) NSString *content;
@property (nonatomic, readonly) NSError *error;

- (id)content;
- (void)dealloc;
- (id)error;
- (id)initWithMimePart:(id)arg1;

@end