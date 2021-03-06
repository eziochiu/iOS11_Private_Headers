/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextElementAction : NSObject <NSCopying> {
    <NTKUpNextElementActionDelegate> * _delegate;
}

@property (nonatomic) <NTKUpNextElementActionDelegate> *delegate;

- (void).cxx_destruct;
- (void)_didFinish:(bool)arg1;
- (void)_performWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
