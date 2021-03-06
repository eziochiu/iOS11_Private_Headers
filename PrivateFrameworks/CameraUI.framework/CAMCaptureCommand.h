/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCaptureCommand : NSObject <NSCoding, NSCopying> {
    NSString * _reason;
    NSArray * _subcommands;
}

@property (nonatomic, copy) NSString *reason;
@property (nonatomic, readonly) bool requiresSessionModification;
@property (nonatomic, copy) NSArray *subcommands;
@property (nonatomic, readonly) NSDictionary *userInfo;

- (void).cxx_destruct;
- (void)addSubcommand:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubcommands:(id)arg1;
- (id)reason;
- (void)removeSubcommand:(id)arg1;
- (bool)requiresSessionModification;
- (void)setReason:(id)arg1;
- (void)setSubcommands:(id)arg1;
- (id)subcommands;
- (id)userInfo;

@end
