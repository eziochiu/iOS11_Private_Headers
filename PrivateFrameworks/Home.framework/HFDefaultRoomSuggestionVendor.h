/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFDefaultRoomSuggestionVendor : NSObject <HFRoomSuggestionVendor> {
    NSSet * _roomSuggestions;
    NSURL * _roomSuggestionsPlistURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *roomSuggestions;
@property (nonatomic, readonly) NSURL *roomSuggestionsPlistURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRoomSuggestionsPlistURL:(id)arg1;
- (id)roomSuggestions;
- (id)roomSuggestionsPlistURL;

@end