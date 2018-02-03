/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSOpenApplicationOptions : NSObject <NSCopying> {
    NSMutableDictionary * _payload;
}

@property (nonatomic, copy) NSDictionary *dictionary;
@property (nonatomic, readonly, retain) NSURL *url;

+ (id)optionsWithDictionary:(id)arg1;

- (void)_sanitizeAndValidatePayload;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)dictionary;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setDictionary:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)url;

@end
