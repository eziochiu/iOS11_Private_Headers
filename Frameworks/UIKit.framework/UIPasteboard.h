/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPasteboard : NSObject

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSArray *URLs;
@property (nonatomic, readonly, copy) NSArray *availableTypes;
@property (nonatomic, readonly) long long changeCount;
@property (nonatomic, copy) UIColor *color;
@property (nonatomic, copy) NSArray *colors;
@property (nonatomic, readonly) bool hasColors;
@property (nonatomic, readonly) bool hasImages;
@property (nonatomic, readonly) bool hasStrings;
@property (nonatomic, readonly) bool hasURLs;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, copy) NSArray *itemProviders;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic, readonly) NSArray *pasteboardTypes;
@property (getter=isPersistent, nonatomic, readonly) bool persistent;
@property (nonatomic, copy) NSString *string;
@property (nonatomic, copy) NSArray *strings;

+ (id)_pasteboardWithName:(id)arg1 create:(bool)arg2;
+ (id)_pasteboardWithUniqueName;
+ (id)generalPasteboard;
+ (id)pasteboardWithName:(id)arg1 create:(bool)arg2;
+ (id)pasteboardWithUniqueName;
+ (void)removePasteboardWithName:(id)arg1;

- (id)URL;
- (id)URLs;
- (bool)_hasStrings;
- (void)addItems:(id)arg1;
- (id)availableTypes;
- (bool)canInstantiateObjectsOfClass:(Class)arg1;
- (long long)changeCount;
- (id)color;
- (id)colors;
- (bool)containsPasteboardTypes:(id)arg1;
- (bool)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (bool)hasColors;
- (bool)hasImages;
- (bool)hasStrings;
- (bool)hasURLs;
- (id)image;
- (id)images;
- (bool)isPersistent;
- (id)itemProviders;
- (id)itemProvidersForInstantiatingObjectsOfClass:(Class)arg1;
- (id)itemSetWithPasteboardTypes:(id)arg1;
- (id)items;
- (id)name;
- (long long)numberOfItems;
- (id)pasteboardTypes;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setColors:(id)arg1;
- (void)setData:(id)arg1 forPasteboardType:(id)arg2;
- (void)setImage:(id)arg1;
- (void)setImages:(id)arg1;
- (void)setItemProviders:(id)arg1;
- (void)setItemProviders:(id)arg1 localOnly:(bool)arg2 expirationDate:(id)arg3;
- (void)setItemProviders:(id)arg1 options:(id)arg2;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 options:(id)arg2;
- (void)setName:(id)arg1;
- (void)setObjects:(id)arg1;
- (void)setObjects:(id)arg1 localOnly:(bool)arg2 expirationDate:(id)arg3;
- (void)setObjects:(id)arg1 options:(id)arg2;
- (void)setPersistent:(bool)arg1;
- (void)setString:(id)arg1;
- (void)setStrings:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setURLs:(id)arg1;
- (void)setValue:(id)arg1 forPasteboardType:(id)arg2;
- (id)string;
- (id)strings;
- (id)valueForPasteboardType:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;

@end
