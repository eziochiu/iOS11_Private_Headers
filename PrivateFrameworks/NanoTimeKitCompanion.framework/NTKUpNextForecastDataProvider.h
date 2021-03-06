/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextForecastDataProvider : NSObject {
    <NTKUpNextElementDataSourceDelegate> * _delegate;
}

@property (nonatomic) <NTKUpNextElementDataSourceDelegate> *delegate;

+ (id)sampleContentElements;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
