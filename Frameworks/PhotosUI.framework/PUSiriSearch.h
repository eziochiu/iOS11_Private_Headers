/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSiriSearch : NSObject {
    STGenericIntent * _siriIntent;
}

@property (nonatomic, readonly) STGenericIntent *siriIntent;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)initWithSiriIntent:(id)arg1;
- (id)newSerializedData;
- (id)siriIntent;

@end
