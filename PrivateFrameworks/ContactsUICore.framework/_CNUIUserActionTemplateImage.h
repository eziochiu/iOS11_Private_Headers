/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface _CNUIUserActionTemplateImage : NSObject <CNUIUserActionTemplateImage> {
    NSString * _imageName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *imageName;
@property (readonly) Class superclass;

+ (id)resourceNameForImageName:(id)arg1 suffixIdentifier:(id)arg2;
+ (id)systemBlueIdentifer;
+ (id)systemMidGrayIdentifier;
+ (id)thirtyPercentAlphaWhiteIdentifier;
+ (id)whiteIdentifier;

- (void).cxx_destruct;
- (id)imageName;
- (id)imageWithSuffixIdentifier:(id)arg1;
- (id)initWithImageName:(id)arg1;
- (id)systemBlueImage;
- (id)systemMidGrayImage;
- (id)thirtyPercentAlphaWhiteImage;
- (id)whiteImage;

@end
