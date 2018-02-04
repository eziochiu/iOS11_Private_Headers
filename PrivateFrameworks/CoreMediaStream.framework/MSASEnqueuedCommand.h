/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASEnqueuedCommand : NSObject <NSCoding> {
    NSString * _command;
    NSDictionary * _invariantParam;
    NSDictionary * _variantParam;
}

@property (nonatomic, copy) NSString *command;
@property (nonatomic, retain) NSDictionary *invariantParam;
@property (nonatomic, retain) NSDictionary *variantParam;

+ (id)command;
+ (id)commandwithCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3;

- (void).cxx_destruct;
- (bool)canBeGroupedWithCommand:(id)arg1;
- (id)command;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3;
- (id)invariantParam;
- (void)setCommand:(id)arg1;
- (void)setInvariantParam:(id)arg1;
- (void)setVariantParam:(id)arg1;
- (id)variantParam;

@end