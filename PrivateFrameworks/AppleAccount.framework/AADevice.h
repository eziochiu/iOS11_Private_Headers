/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AADevice : NSObject {
    NSString * _model;
    NSString * _modelDisplayName;
    NSString * _modelLargePhotoURL1x;
    NSString * _modelLargePhotoURL2x;
    NSString * _modelSmallPhotoURL1x;
    NSString * _modelSmallPhotoURL2x;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *modelDisplayName;
@property (nonatomic, readonly) NSString *modelLargePhotoURL1x;
@property (nonatomic, readonly) NSString *modelLargePhotoURL2x;
@property (nonatomic, readonly) NSString *modelSmallPhotoURL1x;
@property (nonatomic, readonly) NSString *modelSmallPhotoURL2x;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)model;
- (id)modelDisplayName;
- (id)modelLargePhotoURL1x;
- (id)modelLargePhotoURL2x;
- (id)modelSmallPhotoURL1x;
- (id)modelSmallPhotoURL2x;
- (id)name;

@end
