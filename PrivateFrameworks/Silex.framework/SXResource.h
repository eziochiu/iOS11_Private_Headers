/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXResource : SXJSONObject <SXClassFactoryProtocol>

@property (nonatomic, readonly) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

+ (void)initializeObject;
+ (id)typeString;

- (id)URLWithValue:(id)arg1 withType:(int)arg2;

@end
