/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOServerFormattedString : NSObject <GEOServerFormattedString> {
    NSString * _formatString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *formatStrings;
@property (nonatomic, readonly) NSArray *formatTokens;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *separators;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)formatStrings;
- (id)formatTokens;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)separators;

@end
