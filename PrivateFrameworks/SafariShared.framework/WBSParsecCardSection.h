/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecCardSection : NSObject {
    WBSParsecPunchout * _app;
    NSString * _punchoutPickerDismissLabel;
    NSString * _punchoutPickerLabel;
    NSArray * _punchouts;
    NSString * _type;
    NSURL * _url;
}

@property (nonatomic, readonly) WBSParsecPunchout *app;
@property (nonatomic, readonly, copy) NSString *punchoutPickerDismissLabel;
@property (nonatomic, readonly, copy) NSString *punchoutPickerLabel;
@property (nonatomic, readonly) NSArray *punchouts;
@property (nonatomic, readonly, copy) NSString *type;
@property (nonatomic, readonly) NSURL *url;

+ (Class)_classForCardSectionType:(id)arg1;
+ (id)_specializedCardSectionSchema;
+ (id)cardSectionSchema;
+ (id)cardSectionWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;
- (id)app;
- (id)punchoutPickerDismissLabel;
- (id)punchoutPickerLabel;
- (id)punchouts;
- (id)type;
- (id)url;

@end
